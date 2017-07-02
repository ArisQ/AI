#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <string>

namespace searching {

    template<class ActionType>
    class State
    {
    public:
        virtual const long MaxStatus()  const = 0;
        virtual const long Id() const = 0;  //Use Hash instead?
        virtual std::vector<ActionType> Actions() const = 0;
        virtual State& Result(const ActionType action) const = 0;
    };

    template <class StateType, class ActionType>
    class Problem
    {
    public:
        Problem(StateType init_state) :
            current_state(init_state) {
            accessed_flag.resize(((State<ActionType>&)init_state).MaxStatus());
        }
        void SetGoal(std::vector<StateType> goal) {
            this->goal = goal;
            for_each(accessed_flag.begin(), accessed_flag.end(),
                [](int & i) {
                i = false;
            });
            action_sequence.swap(std::queue<ActionType>());
            //SearchPathDepthFirst(current_state);
            SearchPathBreadthFirst(current_state);
        }
    private:
        StateType current_state;
        std::vector<int> accessed_flag;
        std::queue<ActionType> action_sequence;
        std::vector<StateType> goal;
        bool GoalAchieved(const StateType state) {
            for (auto j = goal.begin(); j < goal.end(); j++)
                if (state == (StateType&)*j)
                    return true;
            return false;
        }
        bool SearchPathDepthFirst(const StateType state)
        {
            //This will exhaust the memory for eight puzzles.
            if (GoalAchieved(state))
                return true;
            const State<ActionType> &s = state;
            accessed_flag[s.Id()] = true;
            std::vector<ActionType> actions = s.Actions();
            for (auto i = actions.begin(); i < actions.end(); i++) {
                StateType &successor = (StateType&)(s.Result(*i));
                if (accessed_flag[((State<ActionType> &)successor).Id()] == true)
                    continue;
                action_sequence.push(*i);
                if (SearchPathDepthFirst(successor))
                    return true;
                action_sequence.pop();
            }
            return false;
        }
        bool SearchPathBreadthFirst(const StateType state)
        {
            struct ActionNode{
                const ActionNode * previous;
                ActionType action;
                const StateType * state;
            };
            std::queue<ActionNode> history_list;
            std::queue<ActionNode> todo_list;
            
            if (GoalAchieved(state))
                return true;
            std::vector<ActionType> actions= ((State<ActionType>&)(state)).Actions();
            accessed_flag[((State<ActionType>&)state).Id()] = true;
            for (auto i = actions.begin(); i < actions.end(); i++) {
                todo_list.push(ActionNode{nullptr ,*i ,&state});
            }

            int count = 0;
            while (!todo_list.empty()) {
                ActionNode node = todo_list.front();
                todo_list.pop();

                StateType & successor=(StateType&)node.state->Result(node.action);//new StateType created, need to delete
                if (accessed_flag[((State<ActionType>&)successor).Id()])
                    continue;
                if (GoalAchieved(successor)) {
                    const ActionNode * node_iter = &node;
                    std::vector<ActionType> reverse_action_sequence;
                    while (node_iter != nullptr) {
                        reverse_action_sequence.push_back(node_iter->action);
                        node_iter = node_iter->previous;
                    }

                    StateType &iter_state = current_state;
                    std::cout << "Initial state:" << std::endl << iter_state << std::endl;
                    int step = 1;
                    while (!reverse_action_sequence.empty()) {
                        auto &action=reverse_action_sequence.back();
                        action_sequence.push(action);

                        //output
                        iter_state = (StateType&)(((State<ActionType>&)(iter_state)).Result(action));
                        std::cout << "Step " << step++ <<":"<< action << std::endl;
                        std::cout << iter_state << std::endl;

                        reverse_action_sequence.pop_back();
                    }
                    std::cout << "Goal Achieved" << std::endl << std::endl;
                    //TODO: delete created StateType values, otherwise memory leak here;
                    //need to convert rerferenceto unique_ptr etc.
                    return true;
                }
                history_list.push(node);
                accessed_flag[((State<ActionType>&)successor).Id()] = true;
                count++;                
                if (count == 10000) {
                    std::cout << "Searched : " << history_list.size() << ", Already have : " << todo_list.size() << std::endl;
                    count = 0;
                }
                actions = ((State<ActionType>&)successor).Actions();
                for (auto i = actions.begin(); i < actions.end(); i++) {
                    todo_list.push(ActionNode{ &history_list.back() ,*i ,&successor});
                }
            }
            std::cout << "Searching ended, path not found"<<std::endl;
            return true;
        }
    };

}   //namespace searching 

#endif  //PROBLEM_H
