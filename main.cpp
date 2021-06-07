#include <iostream>
#include <wchar.h>
#ifdef _WIN32
#include <io.h>
#include <fcntl.h>
#endif
#include "ChessBoard.h"

using namespace std;

void testing(ChessBoard board) {
    bool status;

    cout << "Moving C2 to C4"<<endl;
    status = board.move("c2", "c4");
    cout << "Status: " << status << endl;

    cout << "Moving D7 to D5"<<endl;
    status = board.move("d7", "d5");
    cout << "Status = " << status << endl;

    // White Pawn - Idiot for not killing
    // cout << "Moving C4 to C5"<<endl;
    // status = board.move(ChessBoard::coordToPosition("c4"), ChessBoard::coordToPosition("c5"));
    // cout << "Status = " << status << endl;

    // White Pawn - killing
    cout << "Moving C4 to D5"<<endl;
    status = board.move("c4", "d5");
    cout << "Status = " << status << endl;
}

int main()
{
    ChessBoard board;

    board.initialize();
    board.print();
    bool status;

    // Basic testing
    // testing(board);

    // PLAY
    while (true) {
        string from, to;
        cout<<"Enter From: ";
        cin>>from;
        cout<<"Enter To: ";
        cin>>to;
        status = board.move(from, to);
        cout << (status==false ? "Invalid Move. Try again\n" : "\n") << endl;
        if (status == true)
            board.print();
    }
    return 0;
}
