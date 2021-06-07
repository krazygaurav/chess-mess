#ifndef QUEEN_H
#define QUEEN_H

#include "ChessBoard.h"


class Queen : public ChessPiece
{
    public:
        Queen(ChessBoard *board, Color color);
        virtual ~Queen();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif // QUEEN_H
