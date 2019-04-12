FLAGS_OBJECTS = -c
SRC = ./srcs
INCLUDES = ./includes
C_FILE = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJECT_LIST = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
NAME = libft.a

all: $(NAME)

objects:
		gcc $(FLAGS_OBJECTS) ft_*.c -I libft.h

$(NAME): objects
	ar rc libft.a ft_*.o
	ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all