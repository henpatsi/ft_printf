NAME = libftprintf.a

LIBFT = ./libft/libft.a

SOURCES = $(addprefix ./srcs/, ft_printf.c)

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

test: all
	cc $(CFLAGS) tests.c $(NAME) $(LIBFT)