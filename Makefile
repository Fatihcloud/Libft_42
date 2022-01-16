# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 19:18:10 by fbulut            #+#    #+#              #
#    Updated: 2022/01/15 09:25:02 by fbulut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list =	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c\
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_calloc.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c

Bonus_src = ft_lstnew_bonus.c \
			ft_lstadd_back_bonus.c \
			ft_lstlast_bonus.c \
			ft_lstsize_bonus.c \
			ft_lstadd_front_bonus.c \
			ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c\
			ft_lstiter_bonus.c\
			ft_lstmap_bonus.c
			
B_obj = $(Bonus_src:.c=.o)
OBJS = $(list:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all:$(NAME)

$(NAME): $(OBJS) $(B_obj)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS)  -c $<	-o $@
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(B_obj)

bonus : $(OBJS) $(B_obj)
	ar -rcs $(NAME) $(OBJS) $(B_obj)
re:fclean $(NAME)

.PHONY: fclean all re bonus clean