#include "chess/core/Bitboard.h"
#include "chess/io/BoardPrinter.h"

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

white_pawns |= square_bit(Square::A2);
white_pawns |= square_bit(Square::B2);
white_pawns |= square_bit(Square::C2);
white_pawns |= square_bit(Square::D2);
white_pawns |= square_bit(Square::E2);
white_pawns |= square_bit(Square::F2);
white_pawns |= square_bit(Square::G2);
white_pawns |= square_bit(Square::H2);
white_rooks |= square_bit(Square::A1);
white_rooks |= square_bit(Square::H1);
white_knights |= square_bit(Square::B1);
white_knights |= square_bit(Square::G1);
white_bishops |= square_bit(Square::C1);
white_bishops |= square_bit(Square::F1);
white_king |= square_bit(Square::E1);
white_queens |= square_bit(Square::D1);

white_pieces = white_pawns | white_rooks | white_knights | white_bishops | white_king | white_queens;

black_pawns |= square_bit(Square::A7);
black_pawns |= square_bit(Square::B7);
black_pawns |= square_bit(Square::C7);
black_pawns |= square_bit(Square::D7);
black_pawns |= square_bit(Square::E7);
black_pawns |= square_bit(Square::F7);
black_pawns |= square_bit(Square::G7);
black_pawns |= square_bit(Square::H7);
black_rooks |= square_bit(Square::A8);
black_rooks |= square_bit(Square::H8);
black_knights |= square_bit(Square::B8);
black_knights |= square_bit(Square::G8);
black_bishops |= square_bit(Square::C8);
black_bishops |= square_bit(Square::F8);
black_king |= square_bit(Square::E8);
black_queens |= square_bit(Square::D8);

black_pieces = black_pawns | black_rooks | black_knights | black_bishops | black_king | black_queens;

print_board({white_pieces, black_pieces});

return 0;
}


