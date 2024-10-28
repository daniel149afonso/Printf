NAME =	libftprintf.a

SRC =	ft_printf.c \
		ft_printstr.c \
		ft_strlen_v2.c \
		ft_printnbr.c \
		ft_printptr.c \
		ft_printhex.c \
		ft_print_unsigned.c

OBJS = 	$(SRC:.c=.o)

CC = 	gcc
FLAGS =	-Wall -Werror -Wextra
RM =	rm -f
AR =	ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
