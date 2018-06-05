# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmadau <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/24 14:02:48 by tmadau            #+#    #+#              #
#    Updated: 2018/06/05 17:34:55 by tmadau           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

COM = gcc

CFLAGS = -Wall -Wextra -Werror -c -I .

LIBC = libc-func/

ADD = add-func/

PER = per-func/

BON = bonus-func/

CFILES = $(LIBC)ft_bzero.c \
		 $(LIBC)ft_isascii.c \
		 $(LIBC)ft_tolower.c \
		 $(LIBC)ft_isalnum.c \
		 $(LIBC)ft_isdigit.c \
		 $(LIBC)ft_memset.c \
		 $(LIBC)ft_toupper.c \
		 $(LIBC)ft_isalpha.c \
		 $(LIBC)ft_isprint.c \
		 $(LIBC)ft_strlen.c \
		 $(LIBC)ft_strdup.c \
		 $(LIBC)ft_strcpy.c \
		 $(LIBC)ft_atoi.c \
		 $(LIBC)ft_memcpy.c \
		 $(LIBC)ft_memccpy.c \
		 $(LIBC)ft_strncpy.c \
		 $(LIBC)ft_strncmp.c \
		 $(LIBC)ft_strncat.c \
		 $(LIBC)ft_strcmp.c \
		 $(LIBC)ft_memcmp.c \
		 $(LIBC)ft_memmove.c \
		 $(LIBC)ft_memchr.c \
		 $(LIBC)ft_strcat.c \
		 $(LIBC)ft_strncat.c \
		 $(PER)ft_islower.c \
		 $(PER)ft_isupper.c \
		 $(ADD)ft_memalloc.c \
		 $(ADD)ft_memdel.c \
		 $(ADD)ft_strmap.c \
		 $(ADD)ft_putchar.c \
		 $(ADD)ft_putchar_fd.c \
		 $(ADD)ft_putendl.c \
		 $(ADD)ft_putendl_fd.c \
		 $(ADD)ft_putstr.c \
		 $(ADD)ft_putstr_fd.c \
		 $(ADD)ft_strclr.c \
		 $(ADD)ft_strdel.c \
		 $(ADD)ft_strnew.c \
		 $(ADD)ft_striter.c \
		 $(ADD)ft_striteri.c \
		 
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re:fclean all
