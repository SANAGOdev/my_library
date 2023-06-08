/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strcpy.c
*/

#include "library.h"

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i++] = '\0';
    return dest;
}
