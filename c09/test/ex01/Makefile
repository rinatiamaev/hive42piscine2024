# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: riamaev <riamaev@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 08:25:06 by riamaev           #+#    #+#              #
#    Updated: 2024/09/22 08:25:08 by riamaev          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC_DIR := ./srcs/
SRC_FILES := ft_putchar.c \
             ft_swap.c \
             ft_putstr.c \
             ft_strlen.c \
             ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER := -I includes/
LIBC := ar rc
LIBR := ranlib
RM := rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library $@"
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)
	@echo "Library $@ created."

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)

clean:
	@echo "Cleaning up object files..."
	$(RM) $(OBJS)

fclean: clean
	@echo "Removing library..."
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
