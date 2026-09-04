#pragma once
#include <cstdint>

using Bitboard = std::uint64_t;

constexpr Bitboard square_bit(Square square){
    return Bitboard{1} << static_cast<std::uint8_t>(square);
}