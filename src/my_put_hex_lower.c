/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_put_hex_lower.c
*/

#include "library.h"
void my_put_hex_lower(int nb)
{
    char hexa[50];
    int i = 0;

    while (nb != 0) {
        hexa[i] = (char)(*("0123456789abcdef" + ((nb % 16) & (15))));
        nb = (nb / 16);
        i++;
    }
    for (int k = i -1; k >= 0; k--) {
        my_printf("%c", hexa[k]);
    }
}
