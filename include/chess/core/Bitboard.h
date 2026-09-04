#pragma once
#include <cstdint>
#include <bit>
#include "chess/core/types.h"

using Bitboard = std::uint64_t;

constexpr Bitboard square_bit(Square square) noexcept{
    const auto index = static_cast<std::uint8_t>(square);
    return index<64
        ? Bitboard{1} << index // Return a bitboard with the bit corresponding to the square set to 1
        : Bitboard{0}; // Return an empty bitboard for invalid squares
}

constexpr bool has_square(Bitboard board, Square square) noexcept{
    return (board & square_bit(square)) != 0ULL;
}

constexpr void set_square(Bitboard& board, Square square) noexcept{
    board |= square_bit(square);
}

constexpr void clear_square(Bitboard& board, Square square) noexcept{
    board &= ~square_bit(square);
}

constexpr int count_bits(Bitboard board) noexcept{
    return std::popcount(board);
}

constexpr Square lsb_square(Bitboard board) noexcept{
    return static_cast<Square>(std::countr_zero(board));
}

constexpr Square pop_lsb(Bitboard& board) noexcept{
    const Square square = lsb_square(board);
    
    if(board != 0ULL){
        board &= board - 1; // Clear the least significant bit
    }
    return square;
}
