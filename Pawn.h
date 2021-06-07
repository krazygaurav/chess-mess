#ifndef PAWN_H
#define PAWN_H

#include "ChessBoard.h"


class Pawn : public ChessPiece
{
    public:
        Pawn(ChessBoard *board, Color color);
        virtual ~Pawn();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:
        bool wasMoved;
    private:
};

#endif // PAWN_H
