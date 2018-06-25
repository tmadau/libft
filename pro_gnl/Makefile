# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmadau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 14:02:48 by tmadau            #+#    #+#              #
#    Updated: 2018/06/25 16:34:58 by tmadau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFILES = get_next_line.c

HF = get_next_line.h

OFILES = $(CFILES:.c=.o)

CC = gcc

CF = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CF) $(CFILES) -I $(HF)
	ar -rcs $(NAME) $(OFILES)

main:
	gcc -Wall -Wextra -Werror get_next_line.c get_next_line.h main.c libft/libft.a

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
