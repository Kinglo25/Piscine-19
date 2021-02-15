SRCS		= ft_atoi.c \
				op.c \
				ft_strlen.c \
				ft_putstr.c \
				ft_putnbr.c \
				ft_putchar.c \
				main.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
				gcc ${CFLAGS} $^ -o $@

.c.o:
				gcc ${CFLAGS} -c $< -o ${<:.c=.o}
clean:
				rm -f ${OBJS}

fclean:		clean
				rm -f ${NAME}

re:			fclean all