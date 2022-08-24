# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/30 19:37:07 by kcherkao          #+#    #+#              #
#    Updated: 2022/06/30 19:37:21 by kcherkao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_strlen.c

HEADERS = includes

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

%.o : %.c
	${CC} ${FLAGS} $< -o $@ -I ${HEADERS}

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re 
