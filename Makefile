NAME =	libftprintf.a

SRC =	ft_printf.c #ajouter les fichiers suivants

OBJS = 	$(SRC:.c = .o)

CC = 	gcc
FLAGS =	-Wall -Werror -Wextra
RM =	rm -f
AR =	ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

flcean: clean
		$(RM) $(NAME)

re:		flcean all

.PHONY:	all clean fclean re
