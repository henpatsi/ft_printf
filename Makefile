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

SOURCES_DIR = ./srcs/

SOURCES = $(addprefix $(SOURCES_DIR), ft_printf.c ft_printf_strutils.c \
			ft_printf_nbrutils.c ft_printf_hexutils.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), ft_printf.h)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests: $(NAME)
	cc tests.c $(NAME) -I $(INCLUDES_DIR) -o test.out
	./test.out
	rm test.out