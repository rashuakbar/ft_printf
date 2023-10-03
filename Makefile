NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC		=	ft_printf.c \
			ft_printf_int.c \
			ft_printf_char.c \
			ft_printf_string.c \
			ft_printf_pnt.c \
			ft_printf_hxbase.c \
			./libft/ft_strlen.c \
			./libft/ft_strdup.c \
			./libft/ft_putstr_fd.c \
			./libft/ft_putchar_fd.c \
			./libft/ft_itoa.c

OBJ		=	${SRC:.c=.o}

RM = rm -f

AR = ar -rc

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
