#include <iostream>
#include <chess.h>

Chessboard::Chessboard(u_int64_t* board, u_int8_t peice, bool color){
    Chessboard.board = board;
    Chessboard.peice = peice;
    Chessboard.color = color;
}

Chessboard::setup(u_int8_t type, bool color){
    switch(type){
        case 0x00:
            board = 
    }
}