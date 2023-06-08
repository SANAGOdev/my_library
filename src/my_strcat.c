/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strcat.c
*/

#include "library.h"

char *my_strcat(char *dest, char const *src)
{
    int d_len = my_strlen(dest);
    int i = 0;

    for (i = 0; src[i] != '\0'; i++) {
        dest[d_len + i] = src[i];
    }
    dest[d_len + i] = '\0';
    return dest;
}
