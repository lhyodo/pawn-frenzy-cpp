#ifndef BOARD
#define BOARD
#include <vector>
#include "Spot.cpp"

class Board {
   private:
   public:
    Spot boxes[8][8];
    Spot foo{};
    Board() {
        resetBoard();
    }
    void resetBoard() {
        for (int i = 0; i < 8; ++i) {
            boxes[0][i] = *new Spot(0, i, new Pawn(true));
            boxes[1][i] = *new Spot(1, i, new Pawn(true));
            boxes[6][i] = *new Spot(6, i, new Pawn(false));
            boxes[7][i] = *new Spot(7, i, new Pawn(false));
        }
    }
};

#endif