# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 18:27:48 by tvillann          #+#    #+#              #
#    Updated: 2023/07/26 18:27:51 by tvillann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROJECT
NAME	= push_swap
CC		= @cc
CFLAGS	= -Wall -Werror -Wextra
RM		= @rm -f
CLEAR	= @clear
FILE	= $(shell ls -l src/ | grep -F .c | wc -l)
CMP		= 1

#FILE
SRC	= ./src/push_swap.c\
	  ./src/list_utils.c\
	  ./src/push.c\
	  ./src/radix.c\
	  ./src/reverse.c\
	  ./src/rotate.c\
	  ./src/swap.c\
	  ./src/index.c\
	  ./src/simple_sort.c\
	  ./src/simple_sort_utils.c
OBJ	= $(SRC:.c=.o)

# LIBFT
PRINT_PATH	= ./printf --no-print-directory
PRINT_NAME	= ./printf/libftprintf.a

all: $(PRINT_NAME) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))
	
$(PRINT_NAME):
	@make -C $(PRINT_PATH)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(PRINT_NAME) -o $(NAME)
	$(RNBW)

clean:
	@make clean -C $(PRINT_PATH)
	$(RM) $(OBJ)

fclean: clean
	@make fclean -C $(PRINT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: 
	all clean fclean re
