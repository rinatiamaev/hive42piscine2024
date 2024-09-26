# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 09:25:11 by riamaev           #+#    #+#              #
#    Updated: 2024/09/24 09:25:17 by riamaev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = do-op

SRCS = main.c ft_calc.c ft_do_op.c ft_op_choice.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_atoi.c

HEADERS = ft.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@
    
.PHONY: all clean fclean re
