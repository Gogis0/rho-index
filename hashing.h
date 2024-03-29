#include <stdint.h>

extern const uint64_t mersenne_prime_exponent = 61;
extern const uint64_t prime = ((uint64_t)1 << mersenne_prime_exponent) - 1; // 2^61 - 1
extern const uint64_t base = 411910476928516559; // randomly generated

uint64_t mod_mersenne(uint64_t a, const uint64_t mersenne_prime_exponent);

uint64_t mul_mod_mersenne(
    const uint64_t a,
    const uint64_t b,
    const uint64_t mersenne_prime_exponent);

// takes O(log n) time
uint64_t pow_mod_mersenne(
    const uint64_t a,
    uint64_t n,
    const uint64_t mersenne_prime_exponent);

uint64_t concat(
    const uint64_t left_hash,
    const uint64_t right_hash,
    const uint64_t right_len,
    const uint64_t base,
    const uint64_t mersenne_prime_exponent);