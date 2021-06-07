#ifndef ROOK_H
#define ROOK_H

#include "ChessBoard.h"


class Rook: public ChessPiece
{
    public:
        Rook(ChessBoard *board, Color color);
        ~Rook();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif // ROOK_H
