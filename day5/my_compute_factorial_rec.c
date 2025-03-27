/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_compute_factorial_rec
*/

#include <limits.h>

int my_compute_factorial_rec(int nb)
{
    int factorial = 1;

    if (nb < 0 || nb > INT_MAX || nb < INT_MIN) {
        return 0;
    }
    if (nb == 0 || nb == 1) {
        return factorial;
    }
    return nb * my_compute_factorial_rec(nb - 1);
}
