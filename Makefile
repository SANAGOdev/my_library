##
## EPITECH PROJECT, 2022
## mylib
## File description:
## Makefile
##

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = 	src/my_putchar.c			\
      	src/my_put_float.c			\
      	src/my_put_hex_lower.c		\
      	src/my_put_hex_upper.c		\
      	src/my_putlong_float.c		\
      	src/my_put_nbr.c			\
      	src/my_put_octal.c			\
      	src/my_putstr.c				\
      	src/my_put_u.c				\
      	src/my_strlen.c				\
      	src/my_printf.c				\
      	src/my_put_bin.c			\
      	src/binary_convert.c		\
		src/my_strcmp.c 			\
		src/my_strdup.c 			\
		src/my_strcpy.c 			\
		src/my_strcat.c 			\

OBJ = $(SRC:.c=.o)

NAME = library

$(NAME): $(OBJ)
	@ar rc $(NAME).a $(OBJ)
	@mv $(NAME).a ../
	@echo -e "\033[32m[OK]\033[0m": $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f coding-style-reports.log
	@rm -f *.gcno *.gcda *.gcov vgcore.*
	@echo -e "\033[31m[RM]\033[0m": $(OBJ)

fclean: clean
	@rm -f ../$(NAME).a
	@echo -e "\033[31m[RM]\033[0m": $(NAME)

re: fclean all

.PHONY: all clean fclean re
