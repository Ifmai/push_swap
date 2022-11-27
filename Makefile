SRCS =		my_library/ft_atoi.c \
			my_library/ft_putchar_fd.c \
			my_library/ft_putstr_fd.c \
			my_library/ft_lstnew.c \
			my_library/ft_lstadd_front.c \
			my_library/ft_lstsize.c \
			my_library/ft_lstlast.c \
			my_library/ft_lstclear.c \
			my_library/ft_lstadd_back.c \
			my_library/push_swap_utils.c \
			my_library/ft_split.c \
			my_library/ft_calloc.c \
			my_library/ft_memset.c \
			my_library/ft_substr.c \
			my_library/ft_strlen.c \
			my_library/ft_strlcpy.c \
			my_library/ft_strdup.c \
			my_library/error_message.c \
			my_library/ft_isalpha.c \
			my_library/ft_isdigit.c \
			my_library/index.c \
			my_library/push_func.c \
			my_library/utils_2.c \
			sort_push_lst.c 

OBJS = ${SRCS:.c=.o}
NAME = push_swap_lib.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g
RM = rm -rf
LIBC = ar rc 
OUT = push_swap
all: ${NAME} .gcc

${NAME}: ${OBJS}
	@${LIBC} ${NAME} ${OBJS}

.gcc:
	@${CC} ${CFLAGS} -o ${OUT} push_swap.c ${NAME} -g
.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	@${RM} ${OBJS} ${BOBJS}

fclean: clean
	@${RM} ${NAME} push_swap	

re: fclean all

.PHONY: all clean fclean re bonus