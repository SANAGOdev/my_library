/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strdup.c
*/

#include "library.h"

char *my_strdup(char *str)
{
    size_t len = my_strlen(str);
    char *new_str = malloc(len + 1);
    if (new_str == NULL) {
        return NULL;
    }
    my_strcpy(new_str, str);
    return new_str;
}
