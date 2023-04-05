#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_helper(int n, int i) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    return is_prime_helper(n, i + 1);
}

int is_prime_number(int n) {
    return is_prime_helper(n, 2);
}

