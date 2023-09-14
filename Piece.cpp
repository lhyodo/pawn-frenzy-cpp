#ifndef PIECE
#define PIECE

class Piece {
   private:
    bool white{};
    bool killed{};

   public:
    Piece() {
        setWhite(true);
        killed = false;
    }
    Piece(bool w) {
        setWhite(w);
        setKilled(false);
    }
    bool isWhite() {
        return white;
    }
    void setWhite(bool w) {
        white = w;
    }
    bool isKilled() {
        return killed;
    }
    void setKilled(bool k) {
        killed = k;
    }
};

class Pawn : public Piece {
   private:
   public:
    Pawn() {
        setWhite(true);
        setKilled(false);
    }
    Pawn(bool wh) {
        setWhite(wh);
        setKilled(false);
    }
};

#endif
