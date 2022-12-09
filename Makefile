# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: karlewis <karlewis@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 14:33:16 by karlewis          #+#    #+#              #
#    Updated: 2022/12/09 17:32:26 by karlewis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
UTILS = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c

INCLUDE = libft.h
OBJS = $(UTILS:.c=.o)
all: $(NAME)
$(NAME): $(OBJS) $(INCLUDE)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean:clean
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re bonus
	