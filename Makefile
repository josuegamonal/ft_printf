NAME = libftprintf.a

SRC = ft_printf.c ft_putchar_printf.c ft_putstr_printf.c ft_strlen.c ft_putnbr_printf.c ft_digit_counter.c ft_putnbr_unsigned.c \
		ft_unsigned_digit_counter.c ft_convert_to_hexadecimal.c ft_convert_to_hexadecimal_uppercase.c ft_putpercent.printf.c \
		ft_put_address.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(FILE): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
