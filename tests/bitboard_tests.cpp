#include "chess/core/Bitboard.h"
#include "chess/io/BoardPrinter.h"
#include "chess/core/types.h"

int main() {

Bitboard white_pawns = 0ULL;
Bitboard black_pawns = 0ULL;
Bitboard white_rooks = 0ULL;
Bitboard black_rooks = 0ULL;
Bitboard white_knights = 0ULL;
Bitboard black_knights = 0ULL;
Bitboard white_bishops = 0ULL;
Bitboard black_bishops = 0ULL;
Bitboard white_queens = 0ULL;
Bitboard black_queens = 0ULL;
Bitboard white_king = 0ULL;
Bitboard black_king = 0ULL;
Bitboard white_pieces = 0ULL;
Bitboard black_pieces = 0ULL;
Bitboard occupied_squares = 0ULL;

white_pawns |= 1ULL << A2;
white_pawns |= 1ULL << B2;
white_pawns |= 1ULL << C2;
white_pawns |= 1ULL << D2;
white_pawns |= 1ULL << E2;
white_pawns |= 1ULL << F2;
white_pawns |= 1ULL << G2;
white_pawns |= 1ULL << H2;
white_rooks |= 1ULL << A1;
white_rooks |= 1ULL << H1;
white_knights |= 1ULL << B1;
white_knights |= 1ULL << G1;
white_bishops |= 1ULL << C1;
white_bishops |= 1ULL << F1;
white_king |= 1ULL << E1;
white_queens |= 1ULL << D1;

white_pieces = white_pawns | white_rooks | white_knights | white_bishops | white_king | white_queens;

black_pawns |= 1ULL << A7;
black_pawns |= 1ULL << B7;
black_pawns |= 1ULL << C7;
black_pawns |= 1ULL << D7;
black_pawns |= 1ULL << E7;
black_pawns |= 1ULL << F7;
black_pawns |= 1ULL << G7;
black_pawns |= 1ULL << H7;
black_rooks |= 1ULL << A8;
black_rooks |= 1ULL << H8;
black_knights |= 1ULL << B8;
black_knights |= 1ULL << G8;
black_bishops |= 1ULL << C8;
black_bishops |= 1ULL << F8;
black_king |= 1ULL << E8;
black_queens |= 1ULL << D8;

black_pieces = black_pawns | black_rooks | black_knights | black_bishops | black_king | black_queens;

print_board({white_pieces, black_pieces});

return 0;
}


