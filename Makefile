NAME = libftprintf.a

SOURCES = $(addprefix ./srcs/, ft_printf.c)

OBJECTS = $(SOURCE:.c=.o)

INCLUDE_DIR = ./inclues/

INCLUDE = $(addprefix $(INCLUDES_DIR), ft_printf.h libft.h)

CFLAGS += -Wall -Wextra -Werror -I $(INCLUDE_DIR)

all: $(NAME)

$(NAME): $(OBJECTS) libft.a
	ar -rc $(NAME) $(OBJECTS) libft.a

$(OBJECTS) = $(SOURCES)

libft.a:
	make -C ./libft/
