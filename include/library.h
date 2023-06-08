/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** library.h
*/

#ifndef MY_
    #define MY_

    /* Library include */
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdarg.h>

    /* Library functions */
    int my_printf(const char* format, ...);
    void my_put_float(double nb);
    int my_putlong_float(long nb1, char *basic);
    int my_put_nbr(int nb1);
    void my_putchar(char c);
    int my_putstr(char const *arr);
    int my_strlen(char const *arr);
    int my_printf(const char* format, ...);
    void my_put_hex_upper(int nb);
    void my_put_hex_lower(int nb);
    int my_put_octal(int nb);
    void my_put_bin(unsigned int n);
    char *binary(unsigned n, char buffer[]);
    void my_put_u(unsigned int nb);
    int conditions01(const char* format, int i, va_list list);
    int conditions02(const char* format, int i, va_list list);
    int my_second_float(long d2_2, double d2, int i);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strdup(char *str);
    char *my_strcpy(char *dest, char *src);

#endif /* !MY_ */
