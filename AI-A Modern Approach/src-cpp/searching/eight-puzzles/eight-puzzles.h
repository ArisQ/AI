#ifndef EIGHT_PUZZLES_H
#define EIGHT_PUZZLES_H

#include "problem.h"

namespace searching {

enum EightPuzzlesActionType {
    Up,
    Down,
    Left,
    Right
};

class EightPuzzlesState;
class EightPuzzlesAction
{
public:
    EightPuzzlesAction(EightPuzzlesActionType action) :
        action(action) {
    }
private:
    EightPuzzlesActionType action;
    //EightPuzzlesState start, end;
    friend EightPuzzlesState;
    friend std::ostream& operator<<(std::ostream &out, EightPuzzlesAction &s);
};

std::ostream& operator<<(std::ostream &out, EightPuzzlesAction &s)
{
    static const std::string eight_puzzles_action_name[4]{
        " Up  ","Down ","Left ","Right"
    };
    out << "--- Move " << eight_puzzles_action_name[s.action] << " --->";
    return out;
}

class EightPuzzlesState :public State<EightPuzzlesAction>
{
public:
    EightPuzzlesState(const long s) {
        if (IsState(s) == false)
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    value[i][j] = i * 3 + j;
        long tmp = s;
        for (int i = 2; i >= 0; i--)
            for (int j = 2; j >= 0; j--) {
                value[i][j] = tmp % 10;
                tmp /= 10;
            }
    }
    static const long max_states = 362880L; //  =9!
    static bool IsState(const long s) {
        // from 012345678 to 876543210
        char v[10] = { 0 };
        v[9] = 1;   //  9 should not appear.
        if (s < 12345678L)
            return false;
        long tmp = s;
        char c;
        while (tmp != 0) {
            c = tmp % 10;
            if (v[c])
                return false;
            v[c] = 1;
            tmp /= 10;
        }
        return true;
    }
    const long MaxStatus()  const { return 362880L; }
    const long Id() const {
        long id = 0;
        bool used[9] = { false };
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                long p = 0;// the position of value[i][j] or how many unuse before used[value[i][j]]
                for (int k = 0; k < 9; k++)
                    if (k == value[i][j])
                        break;
                    else if (used[k] == false)
                        p++;
                used[value[i][j]] = true;
                id += p * weight[i][j];
            }
        return id;
    }
    std::vector<EightPuzzlesAction> Actions() const {
        std::vector<EightPuzzlesAction> actions;
        actions.push_back(EightPuzzlesAction(Up));
        actions.push_back(EightPuzzlesAction(Down));
        actions.push_back(EightPuzzlesAction(Left));
        actions.push_back(EightPuzzlesAction(Right));
        return actions;
    }
    State & Result(const EightPuzzlesAction action) const {
        EightPuzzlesState *state = new EightPuzzlesState(*this);
        int x, y;  //Store the indexes(i,j) of 0
        for (int i = 0; i<3; i++)
            for (int j = 0; j < 3; j++)
                if (value[i][j] == 0) {
                    x = i;
                    y = j;
                }
        switch (action.action)
        {
        case Up:
            if (x > 0) {
                state->value[x][y] = this->value[x - 1][y];
                state->value[x - 1][y] = this->value[x][y];
            }
            break;
        case Down:
            if (x < 2) {
                state->value[x][y] = this->value[x + 1][y];
                state->value[x + 1][y] = this->value[x][y];
            }
            break;
        case Left:
            if (y > 0) {
                state->value[x][y] = this->value[x][y - 1];
                state->value[x][y - 1] = this->value[x][y];
            }
            break;
        case Right:
            if (y < 2) {
                state->value[x][y] = this->value[x][y + 1];
                state->value[x][y + 1] = this->value[x][y];
            }
            break;
        default:
            break;
        }
        return *state;//Do nothing
    }
    //operators
    const bool operator == (const EightPuzzlesState& vs) const {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (value[i][j] != vs.value[i][j])
                    return false;
        return true;
    }
    friend std::ostream& operator<<(std::ostream &out, EightPuzzlesState &s);
private:
    char value[3][3];
    static const long weight[3][3];
};

std::ostream& operator<<(std::ostream &out, EightPuzzlesState &s)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            out << (int)s.value[i][j] << " ";
        out << std::endl;
    }
    return out;
}

const long EightPuzzlesState::weight[3][3] = {
    8L * 7L * 6L * 5L * 4L * 3L * 2L * 1L,
    7L * 6L * 5L * 4L * 3L * 2L * 1L,
    6L * 5L * 4L * 3L * 2L * 1L,
    5L * 4L * 3L * 2L * 1L,
    4L * 3L * 2L * 1L,
    3L * 2L * 1L,
    2L * 1L,
    1L, //1!=1
    1L  // 0!=1
};

}   //namespace searching

#endif // EIGHT_PUZZLES_H

