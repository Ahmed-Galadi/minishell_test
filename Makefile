# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaladi <agaladi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/10 23:26:11 by agaladi           #+#    #+#              #
#    Updated: 2024/07/11 02:15:23 by agaladi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRCS = parsing/errors/error_handler.c  parsing/formater/add_spaces.c \
parsing/formater/formater.c parsing/formater/trim_quotes.c \
utils/str_utils.c utils/ft_split.c main.c
CFLAGS = -Wall -Wextra -Werror
DEPS = main.h
LIB = main.a
OUT = minishell
OBJS = $(SRCS:.c=.o)

all: $(OUT)

$(OUT): $(OBJS) $(DEPS)
	$(CC) $(CFLAGS) $(OBJS) -o $(OUT)

$(LIB): $(OBJS)
	ar -rc $(LIB) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS) $(LIB)

fclean: clean
	rm -rf $(OUT)

re: fclean all

recom: all
	rm -rf $(OBJS) $(LIB)
