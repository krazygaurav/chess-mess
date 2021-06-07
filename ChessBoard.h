#ifndef CHESSBOARD_H
#define CHESSBOARD_H
//#include "ChessPiece.h"
#include <wchar.h>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif
#include <string>
#include <vector>
#define SIZE 8

using namespace std;
//color of the pieces
enum Color {WHITE, BLACK};
struct Position{
    int row;
    int col;
    Position(int _row, int _col){
        row=_row;
        col=_col;
    }
};
class ChessPiece;

class ChessBoard
{
    public:
        ChessBoard();
        virtual ~ChessBoard();
        ChessPiece* getPiece(Position position) const;// returns the chess piece at a given position.
        bool static isCorrect(const int);
        static string coordToString(const int, const int);
        static Position coordToPosition(const string);
        void initialize();
        void print() const;
        void printWindows() const;
        bool move(string fromStr, string toStr);
        bool placePiece(ChessPiece* piece, Position position);

    protected:

    private:
        ChessPiece* board[SIZE][SIZE];
};


class ChessPiece
{
    public:
        ChessPiece(ChessBoard* board, Color color);
        ~ChessPiece() {}

        int getRow() const {return row;}//the row.
        int getColumn() const {return column;} //returns the column.
        Color getColor() const {return color;}//returns the color of the piece
        string getPosition() const;//returns the position of the piece in the format single letter (a..h) followed by a single digit (1..8).

        void setRow(const int);
        void setColumn(const int); //sets the column.
        void setPosition(const Position); //
        void setPosition(const string); //
        //This method sets the position of the piece to the appropriate row and column based on the argument, which in the format single letter (a..h) followed by a single digit (1..8).
        virtual string toString() const=0;//
        virtual vector<string>* legalMoves() const=0;



    protected:
        ChessBoard* board; // the board it belongs to, default null
        int row; // the index of the horizontal rows 0..7
        int column; // the index of the vertical column 0..7
        Color color; // the color of the piece

    private:

};


#endif // CHESSBOARD_H
