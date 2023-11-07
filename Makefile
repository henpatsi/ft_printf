# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:27:21 by hpatsi            #+#    #+#              #
#    Updated: 2023/11/06 15:27:21 by hpatsi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft/libft.a

SOURCES = $(addprefix ./srcs/, ft_printf.c ft_i_putchar.c ft_i_putstr.c \
			ft_i_putnbr.c ft_i_putunbr.c ft_i_puthex.c ft_i_putaddr.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), ft_printf.h libft.h)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT)
	ar -rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)

$(LIBFT):
	make -C ./libft/

clean:
	make clean -C ./libft/
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

tests: $(NAME)
	cc tests.c $(NAME) $(LIBFT) -I $(INCLUDES_DIR) -o test.out
	leaks --atExit -q -- ./test.out
	rm test.out