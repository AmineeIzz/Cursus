NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_strnstr.c ft_atoi.c ft_strlcpy.c ft_strlcat.c
OFILES = $(CFILES:.c=.o)

BONUS_CFILES = ft_lstiter_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c ft_lstnew_bonus.c ft_lstadd_front_bonus.c
BONUS_OFILES = $(BONUS_CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) libft.h
	ar rcs $(NAME) $(OFILES)
bonus: $(BONUS_OFILES)
	ar rcs $(NAME) $(BONUS_OFILES)
clean:
	rm -f $(OFILES) $(BONUS_OFILES)
fclean: clean
	rm -f $(NAME)
re: fclean all
