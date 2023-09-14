#ifndef BOARD
#define BOARD
#include "Piece.cpp"
#include "Spot.cpp"

class Board {
    private:
    Spot box[8][8];
    public:

    Board() {
        resetBoard();
    }
    void resetBoard() {

        for (int i = 0; i < 8; ++i) {
            box[0][i] = *new Spot(0, i, new Pawn(true));
            box[1][i] = *new Spot(1, i, new Pawn(true));
            box[6][i] = *new Spot(6, i, new Pawn(false));
            box[7][i] = *new Spot(7, i, new Pawn(false));
        }

    }
};

#endif