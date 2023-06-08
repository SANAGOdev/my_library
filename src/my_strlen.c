/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_strlen.c
*/

#include "library.h"

int my_strlen(char const *arr)
{
    int count = 0;
    while (arr[count] != '\0'){
        count = count + 1;
    }
    return (count);
}
