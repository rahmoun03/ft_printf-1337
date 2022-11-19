NAME = libftprintf.a
SRC = ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c ft_putunsigned.c ft_printhexa.c ft_strlen.c
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror

.c.o:
	cc ${FLAGS} -c $< -o ${<:.c=.o} 

${NAME} :${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all :${NAME}

clean :
	rm -rf ${OBJ}

fclean :clean
	rm -rf ${NAME}

re :fclean all
