#include <iostream>
#include "problem.h"
#include "vaccum-world.h"
#include "eight-puzzles.h"

using namespace std;
using namespace searching;

int main()
{
    VaccumRoom room[RoomNumber] = { LeftRoom,RightRoom };
    bool clean[RoomNumber][2] = { false };
    for (int i = 0; i < RoomNumber; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
            {
                VaccumState vs(room[i], j == 1, k == 1);
                std::cout << (room[i] == LeftRoom ? "LeftRoom" : "RightRoom") << " " <<
                    (j == 1 ? "clean" : "dirty") << " " <<
                    (k == 1 ? "clean" : "dirty") << " " <<
                    vs.Id() << endl;
            }

    VaccumState init_vaccum_state(LeftRoom, false, false);
    vector<VaccumState> goal_vaccum_state{ {LeftRoom, true, true},{RightRoom, true, true } };
    Problem<VaccumState, VaccumAction> vacuum(init_vaccum_state);
    vacuum.SetGoal(goal_vaccum_state);


    EightPuzzlesState init_eight_puzzles_state(724506831L);
    vector<EightPuzzlesState> goal_eight_puzzles_state{ { 12345678L } };
    Problem<EightPuzzlesState, EightPuzzlesAction> eight_puzzles(init_eight_puzzles_state);
    eight_puzzles.SetGoal(goal_eight_puzzles_state);

    getchar();
    return 0;
}
