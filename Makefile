# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wyuki <wyuki@student.42tokyo.jp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/25 00:26:00 by wyuki             #+#    #+#              #
#    Updated: 2025/06/01 22:25:16 by wyuki            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

SRC_PATH = src/

INCS = -I ./includes/

SRC = error.c \
	init.c \
	push.c \
	reverse_rotate.c \
	rotate.c \
	sort.c \
	sort_utils.c \
	sort_under_five.c \
	stack.c \
	stack_utils.c \
	swap.c \
	validate_args.c \
	utils.c \
	push_swap.c \
	main_utils.c \

BONUS_SRC = error.c \
	init.c \
	sort.c \
	sort_utils.c \
	sort_under_five.c \
	stack.c \
	stack_utils.c \
	utils.c \
	validate_args.c \
	main_utils.c \

SRCS = $(addprefix $(SRC_PATH), $(SRC))

BONUS_SRCS = $(addprefix $(SRC_PATH), $(BONUS_SRC))

BONUS_SRCS += bonus/checker_bonus.c bonus/utils_bonus.c bonus/swap_bonus.c \
			  bonus/rotate_bonus.c bonus/reverse_rotate_bonus.c \
			  bonus/push_bonus.c bonus/print_result_bonus.c \

OBJ = $(SRCS:.c=.o)
BONUS_OBJ = $(BONUS_SRCS:.c=.o)

.PHONY: all clean fclean re bonus

%.o: %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INCS) -L libft -lft

all: $(NAME)

clean:
	make -C ./libft clean
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	make -C ./libft fclean
	rm -f $(NAME) checker

checker: $(BONUS_OBJ)
	make -C ./libft
	$(CC) $(CFLAGS) -o checker $(BONUS_OBJ) $(INCS) -L libft -lft

bonus: checker

re: fclean all
