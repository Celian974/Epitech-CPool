/*
** CELIAN SIAMPIRAVE, 2025
** Epitech-CPool
** File description:
** my_compute_power_it
*/

#include <limits.h>

int my_compute_power_it(int nb, int p)
{
    int powered = 1;
    int i;

    if (p == 0) {
        return powered;
    }
    if (p < 0 || p > INT_MAX) {
        powered = 0;
    }
    for (i = 0; i < p; i++) {
        powered = powered * nb;
    }
    return powered;
}
