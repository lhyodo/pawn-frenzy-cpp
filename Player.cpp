#ifndef PLAYER
#define PLAYER


class Player {
   public:
    bool whiteSide{};
    bool humanPlayer{};
    Player() {
        whiteSide = true;
        humanPlayer = true;
    }
    bool isWhiteSide() {
        return whiteSide;
    }
    bool isHumanPlayer() {
        return humanPlayer;
    }
};

class HumanPlayer : Player {
   public:
    HumanPlayer(bool ws) {
      whiteSide = ws;
      humanPlayer = true;
    }
};

class ComputerPlayer : Player {
   public:
    ComputerPlayer(bool ws) {
      whiteSide = ws;
      humanPlayer = false;
    }
};

#endif