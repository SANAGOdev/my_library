/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_put_u.c
*/

#include "library.h"

void my_put_u(unsigned int nb1)
{
    int nb2 = 0;

    if (nb1 >= 10) {
        nb2 = nb1 % 10;
        nb1 = nb1 / 10;
        my_put_nbr(nb1);
        my_putchar(nb2 + '0');
    }else {
        my_putchar(nb1 + '0');
    }
}
