#ifndef VACCUM_WORLD_H
#define VACCUM_WORLD_H
namespace searching {

    enum VaccumActionType {
        MoveLeft,
        MoveRight,
        Suck
    };

    enum VaccumRoom {
        LeftRoom,
        RightRoom,
        //---
        RoomNumber
    };

    class VaccumAction
    {
    public:
        VaccumAction(VaccumActionType action) :
            action(action) {
        }
    private:
        VaccumActionType action;
        friend class VaccumState;
        friend std::ostream& operator<<(std::ostream &out, const VaccumAction &s);
    };

    std::ostream& operator<<(std::ostream &out, const VaccumAction &s)
    {
        static const std::string vaccum_action_name[4]{
            "MoveLeft","MoveRight","Suck"
        };
        out << "---\t" << vaccum_action_name[s.action] << "\t--->";
        return out;
    }

    class VaccumState : public State<VaccumAction>
    {
    public:
        VaccumState(VaccumRoom position,
            bool(&clean)[RoomNumber]) {
            this->position = position;
            for (int i = 0; i < RoomNumber; i++)
                this->clean[i] = clean[i];
        }
        VaccumState(VaccumRoom position,
            bool left_clean, bool right_clean) {
            this->position = position;
            clean[0] = left_clean;
            clean[1] = right_clean;
        }
        VaccumState(const VaccumState &vs) {
            position = vs.position;
            clean[LeftRoom] = vs.clean[LeftRoom];
            clean[RightRoom] = vs.clean[RightRoom];
        }
        const long MaxStatus()  const { return 8; }
        const long Id() const {
            long id = 0;
            long power_2_n = 1;
            for (int i = RoomNumber - 1; i >= 0; i--) {
                id += clean[i] * power_2_n;
                power_2_n *= 2;
            }
            id += position*power_2_n;
            return id;
        }
        std::vector<VaccumAction> Actions() const {
            std::vector<VaccumAction> actions;
            actions.push_back(VaccumAction(MoveLeft));
            actions.push_back(VaccumAction(MoveRight));
            actions.push_back(VaccumAction(Suck));
            return actions;
        }
        State& Result(const VaccumAction action) const {
            VaccumState *state = new VaccumState(*this);
            switch (((VaccumAction&)action).action)
            {
            case MoveLeft:
                state->position = LeftRoom;
                break;
            case MoveRight:
                state->position = RightRoom;
                break;
            case Suck:
                state->clean[position] = true;
                break;
            default:
                break;
            }
            return *state;
        }
        //operators
        const bool operator == (const VaccumState& vs) const {
            if (position != vs.position)
                return false;
            for (int i = 0; i < RoomNumber; i++)
                if (clean[i] != vs.clean[i])
                    return false;
            return true;
        }
        friend std::ostream & operator<<(std::ostream &out, VaccumState &s);
    private:
        VaccumRoom position;
        bool clean[RoomNumber];
    };

    std::ostream & operator<<(std::ostream &out, VaccumState &s)
    {
        static const std::string vaccum_position_name[2]{
            "LeftRoom","RightRoom"
        };
        out << vaccum_position_name[s.position];
        out << " " << (s.clean[LeftRoom] ? "clean" : "dirty");
        out << " " << (s.clean[RightRoom] ? "clean" : "dirty");
        return out;
    }

}   //namespace searching

#endif // !VACCUM_WORLD_H

