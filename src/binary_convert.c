/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** binary_convert.c
*/

#include "library.h"

char *binary(unsigned n, char buffer[])
{
    char *ptr = buffer + 32;
    do {
        *(--ptr) = (n & 1) + '0';
        n >>= 1;
    } while (n);
    return ptr;
}
