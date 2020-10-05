# **************************************************************************** #
#                                                                              # 
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jinhokim <jinhokim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 20:08:11 by jinhokim          #+#    #+#              #
#    Updated: 2020/10/05 17:45:07 by jinhokim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_memset.c \
		ft_bzero.c \
		ft_memccpy.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra

OBJ		= ${FILES:.c=.o}
BONUS_OBJ = ${BONUS:.c=.o}

RM		= rm -rf

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME)	: ${OBJ}
			ar rc ${NAME} ${OBJ}

all : ${NAME}
bonus: ${OBJ} ${BONUS_OBJ}
			ar rc ${NAME} ${OBJ} ${BONUS_OBJ}

clean :
			${RM} *.o 

fclean : clean
			${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
