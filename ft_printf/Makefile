NAME = libftprintf.a
CC = CC
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_printf.c ft_putchar.c ft_putnbr.c ft_hex.c ft_upperhex.c ft_putstr.c ft_unsignednbr.c
OFILES = $(CFILES:.c=.o)

all : $(NAME)

$(NAME): $(OFILES) ft_printf.h
		ar rcs $(NAME) $(OFILES)
clean :
		rm -f $(OFILES)
fclean : clean
		rm -f $(NAME)
re : fclean all