#include "Piece.cpp";

class Spot {
   private:
    Piece* piece{};
    int x;
    int y;

   public:
    Spot() {
        setX(0);
        setY(0);
        piece = NULL;
    }
    Spot(int xCord, int yCord, Piece* p) {
        x = xCord;
        y = yCord;
        piece = p;
    }
    Piece* getPiece() {
        return piece;
    }
    void setPiece(Piece& p) {
        piece = &p;
    }
    int getX() {
        return x;
    }
    int setX(int xCord) {
        x = xCord;
    }
    int getY() {
        return y;
    }
    int setY(int yCord) {
        y = yCord;
    }
};