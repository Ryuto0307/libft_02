NAME             =    libft.a
SRCS             =    ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_isalnum.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
                    ft_strlen.c ft_memmove.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strchr.c  ft_memcpy.c ft_bzero.c ft_calloc.c ft_strdup.c\
                    ft_putnbr_fd.c ft_split.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_strjoin.c  ft_substr.c ft_isalnum.c ft_strrchr.c

CC                =    cc
CFLAGS            =    -Wall -Wextra -Werror
LIBC            =    ar -rc
RM                =    rm -f
ifdef WITH_BONUS
SRCS        +=    ${BONUS}
endif
OBJS            =    ${SRCS:.c=.o}


.c.o:
	 ${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
	${LIBC} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS} ${BONUS:.c=.o}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

bonus:
	make WITH_BONUS=1 ${NAME}
