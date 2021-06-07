#ifndef BISHOP_H
#define BISHOP_H

#include "ChessBoard.h"


class Bishop : public ChessPiece
{
    public:
        Bishop(ChessBoard *board, Color color);
        virtual ~Bishop();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif // BISHOP_H
