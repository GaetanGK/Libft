# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Gkatounk <gkatounk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 23:25:24 by Gkatounk          #+#    #+#              #
#    Updated: 2020/11/20 14:55:12 by Gkatounk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Wextra -Werror -I. -c
FILES		= ft_isalpha.c \
				ft_isupper.c \
				ft_memmove.c \
				ft_split.c \
				ft_strlen.c \
				ft_substr.c \
				ft_isascii.c \
				ft_itoa.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strmapi.c \
				ft_tolower.c \
				ft_atoi.c \
				ft_isdigit.c \
				ft_memccpy.c \
				ft_putchar_fd.c \
				ft_strdup.c \
				ft_strncmp.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_islower.c \
				ft_memchr.c \
				ft_putendl_fd.c \
				ft_strjoin.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_isprint.c \
				ft_memcmp.c \
				ft_putnbr_fd.c \
				ft_strlcat.c \
				ft_strrchr.c \
				ft_isalnum.c \
				ft_isspace.c \
				ft_memcpy.c \
				ft_putstr_fd.c \
				ft_strlcpy.c \
				ft_strtrim.c

BONUS_FILES 	= ft_lstnew.c \
		 		ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c


OBJ		= $(FILES:%.c=%.o)
BONUS_OBJS	= $(BONUS_FILES:%.c=%.o)

all: $(NAME) bonus

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	gcc $(CFLAGS) $(FILES)

bonus: $(BONUS_OBJS) 
	ar rcs $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS): $(BONUS_FILES)
	gcc $(CFLAGS) $(BONUS_FILES)

clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
