#include "ChessBoard.h"

ChessPiece::ChessPiece(ChessBoard* board, Color color){
    this->board=board;
    this->color=color;
}
string ChessPiece::getPosition() const//returns the position of the piece in the format single letter (a..h) followed by a single digit (1..8).
{
    char ans=row+'a';
    char ans2=column+'0';
    string res=""+ans;
    res=res+ans2;
    return res;
}

//This method sets the row.
void ChessPiece::setRow(const int i){
    if((i>=0)&&(i<8))
        row=i;
}
//This method sets the column.
void ChessPiece::setColumn(const int i){
    if((i>=0)&&(i<8))
        column=i;
}

//sets the position of the piece to the appropriate row and column based on the argument,
//which in the format single letter (a..h) followed by a single digit (1..8).
void ChessPiece::setPosition(const string position){
    setRow(position[0]-'a');
    setColumn(position[1]);
}



void ChessPiece::setPosition(const Position position){
    setRow(position.row);
    setColumn(position.col);
}
