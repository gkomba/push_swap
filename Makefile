# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkomba <<marvin@42.fr> >                   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 20:21:07 by gkomba            #+#    #+#              #
#    Updated: 2024/07/30 16:09:05 by gkomba           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRCS =	ft_add_list_element.c\
	ft_checkargs.c\
	ft_check_list.c\
	ft_find_list_element.c\
	ft_pop.c\
	ft_push.c\
	ft_sort_list.c\
	ft_swap_list.c\
	rotate.c\
	rrotate.c\
	utils1.c\
	utils2.c\
	ft_free_stacks.c\
	algorithms1.c\
	algorithms2.c\
	algorithms3.c\
	algorithms_utils1.c\
	algorithms_utils2.c\
	algorithms_utils3.c\
	push_swap.c\

MAKEFLAGS += -silent

OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
PRINTF = ft_printf
LIBFT = libft

all: ${NAME}

${NAME}: ${OBJS}
	@make -s -C ${PRINTF}
	@make -s -C ${LIBFT}
	@${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIBFT}/libft.a ${PRINTF}/libftprintf.a
	@echo "\033[0;32mOK!\033[0m"
	@make clean

norm:
	norminette
	norminette -R CheckForbiddenSourceHeader

git: fclean
	git status
	git add .
	git status
	git commit -m "PUSH_SWAP"
	git push

clean:
	@make clean -s -C ${PRINTF}
	@make clean -s -C ${LIBFT}
	@${RM} ${OBJS}

fclean: clean
	@make fclean -s -C ${PRINTF}
	@make fclean -s -C ${LIBFT}
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
