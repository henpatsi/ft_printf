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

SOURCES = $(addprefix ./srcs/, ft_printf.c ft_i_putchar_fd.c ft_i_putstr_fd.c \
			ft_i_putnbr_fd.c ft_i_putunbr_fd.c ft_i_puthex_fd.c ft_i_putaddr_fd.c \
			ft_itoh.c ft_ltoh.c)

OBJECTS = $(SOURCES:.c=.o)

INCLUDES_DIR = ./includes/

INCLUDES = $(addprefix $(INCLUDES_DIR), ft_printf.h libft.h)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDES_DIR)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

$(LIBFT):
	make -C ./libft/

$(OBJECTS): $(SOURCES)

clean:
	rm -f $(OBJECTS)
	make clean -C ./libft/

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT)

re: fclean all

tests: $(NAME) $(LIBFT)
	cc $(CFLAGS) tests.c $(NAME) $(LIBFT)