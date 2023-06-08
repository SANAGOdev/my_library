/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_put_bin.c
*/

#include "library.h"

void my_put_float(double nb)
{
    long d1 = 0, tmp = nb, d2_2 = 0;
    double d2 = 0;
    int i = 0;
    d1 = nb * (float)1000000;
    d1 -= tmp * 1000000;
    d2 = (double)d1;
    if (nb < 0 && nb > -1) {
        my_putchar('-');
        if (nb < 1)
            my_putchar('0');
    }
    i += my_putlong_float(tmp, "0123456789");
    i++;
    my_putchar('.');
    my_second_float(d2_2, d2, i);
}

int my_second_float(long d2_2, double d2, int i)
{
    if ((long)d2 < 0)
        d2 *= -1;
    d2_2 = d2;
    while (d2_2 < 99999) {
        d2_2 *= 10;
        if (d2_2 == 0)
            d2_2 += 9;
        my_putchar('0');

    }
    i += my_putlong_float((long)d2, "0123456789");
    return (i);
}
