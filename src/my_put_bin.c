/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_put_bin.c
*/

#include "library.h"

void my_put_bin(unsigned int n)
{
    char buffer[32 + 1];
    buffer[32] = '\0';
    char *a = binary(n, buffer);
    my_printf("%s\n", a);
}
