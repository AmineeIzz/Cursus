NAME = so_long 
CC = cc
CFLAGS = -Wall -Wextra -Werror -I "MLX42/include/MLX42/MLX42.h"
LDFLAGS = -L"/Users/mizem/.brew/opt/glfw/lib/" -lglfw
LIBS = ../MLX42/build/libmlx42.a
CFILES = main.c fill_map.c player.c errors.c counters.c map_check.c flud.c ft_free.c movements.c
LIBFT = libft/ft_atoi.c libft/ft_strstr.c
FT_PRINTF = ft_printf/ft_printf.c ft_printf/ft_putchar.c ft_printf/ft_putnbr.c ft_printf/ft_hex.c ft_printf/ft_upperhex.c ft_printf/ft_putstr.c ft_printf/ft_unsignednbr.c
GNL = get_next_line/get_next_line_utils.c get_next_line/get_next_line.c
OFILES = $(CFILES:.c=.o) $(LIBFT:.c=.o) $(GNL:.c=.o) $(FT_PRINTF:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) so_long.h
	$(CC) $(OFILES) $(CFLAGS) $(LIBS) $(LDFLAGS) -o $(NAME)
clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
re : fclean all