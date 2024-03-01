NAME             =    libft.a
SRCS             =     ft_calloc.c ft_strdup.c ft_strdup.c\
                     ft_split.c ft_strtrim.c ft_itoa.c ft_strjoin.c ft_substr.c

CC                =    cc
CFLAGS            =    -Wall -Wextra -Werror
LIBC            =    ar -rc
RM                =    rm -f
OBJS            =    ${SRCS:.c=.o}


.c.o:
	 ${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	${LIBC} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all


