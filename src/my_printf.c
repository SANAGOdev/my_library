/*
** EPITECH PROJECT, 2022
** mylib
** File description:
** my_printf.c
*/

#include "library.h"

int my_printf(const char* format, ...)
{
    va_list list;
    va_start(list, format);

    for (int i = 0; i < my_strlen(format); i++) {
        i = conditions01(format, i, list);
        i = conditions02(format, i, list);
    }
    va_end(list);
    return 0;
}

int conditions01(const char* format, int i, va_list list)
{
        if (format[i] == '%' && format[i + 1] == 's')
            my_putstr(va_arg(list, char *));
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            my_put_nbr(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'c')
            my_putchar((char) va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == '%')
            my_putchar('%');
        if (format[i] == '%' && (format[i + 1] == 'f' || format[i + 1] == 'F'))
            my_put_float(va_arg(list, double));
        if (format[i] == '%' && format[i + 1] == 'o')
            my_put_octal(va_arg(list, int));

    return i;
}

int conditions02(const char* format, int i, va_list list)
{
        if (format[i] == '%' && format[i + 1] == 'x')
            my_put_hex_lower(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'X')
            my_put_hex_upper(va_arg(list, int));
        if (format[i] == '%' && format[i + 1] == 'u')
            my_put_u(va_arg(list, unsigned int));
        if (format[i] == '%' && format[i + 1] == 'b')
            my_put_bin(va_arg(list, unsigned int));
        if (format[i] != '%')
            my_putchar(format[i]);
        else
            i += 1;
    return i;
}
