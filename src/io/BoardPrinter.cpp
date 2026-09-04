#include <iostream>
#include "chess/io/BoardPrinter.h"

void print_board(std::initializer_list<Bitboard> boards){
    Bitboard combined = 0ULL;
    for(Bitboard board: boards){
        combined |= board;
    }
    std::cout << "\n";
    for(int rank = 7; rank>=0; rank--){
        std::cout << rank + 1 << "  ";
        for(int file = 0; file < 8; file++){
            int square = rank * 8 + file;
            if(combined & (1ULL << square)){
                std::cout << "1 ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << '\n';
    }
    std::cout << "\n  A B C D E F G H\n";
}