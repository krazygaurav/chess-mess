#ifndef KNIGHT_H
#define KNIGHT_H

#include "ChessBoard.h"


class Knight : public ChessPiece
{
    public:
        Knight(ChessBoard *board, Color color);
        virtual ~Knight();
        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif // KNIGHT_H
