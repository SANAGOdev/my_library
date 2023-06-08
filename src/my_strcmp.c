/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strcmp.c
*/

#include "library.h"

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
