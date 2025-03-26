/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_compute_factorial_it
*/

#include <limits.h>

int my_compute_factorial_it(int nb)
{
    int factorial = 1;

    if (nb < 0 || nb > INT_MAX || nb < INT_MIN) {
        return 0;
    }
    for (int i = 2; i <= nb; i++) {
        factorial = factorial * i;
    }
    return factorial;
}
