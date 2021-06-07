#ifndef KING_H
#define KING_H
#include "ChessBoard.h"


class King : public ChessPiece
{
    public:
        King(ChessBoard *board, Color color);
        virtual ~King();

        string toString() const;
        vector<string>* legalMoves()const;
    protected:

    private:
};

#endif // KING_H
