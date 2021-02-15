SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	=	${SRCS:.c=.o}
NAME	=	libft.a
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
.c.o:
			${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re