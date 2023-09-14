#include "Player.cpp"
#include "Spot.cpp"

class Move {
  private:
  Player player;
  Spot start;
  Spot end;
  Piece pieceMoved;
  Piece pieceKilled;

  Move(Player p, Spot s, Spot e) {
    player = p;
    start = s;
    end = e;
    pieceMoved = start.getPiece();
    
  }
};

