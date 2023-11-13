
#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 13:14:17 by tkartasl          #+#    #+#              #
#    Updated: 2023/11/10 14:48:55 by tkartasl         ###   ########.fr        #
#                                                                              #
#******************************************************************************#
NAME = libft.a

SRCS = ft_atoi.c\
	ft_memcmp.c \
	ft_strdup.c	\
	ft_strtrim.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_striteri.c \
	ft_substr.c \
	ft_calloc.c \
	ft_memmove.c \
	ft_strjoin.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_memset.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_isalpha.c \
	ft_putchar_fd.c \
	ft_strlcpy.c \
	ft_isascii.c \
	ft_putendl_fd.c \
	ft_strlen.c \
	ft_isdigit.c \
	ft_putnbr_fd.c \
	ft_strmapi.c \
	ft_isprint.c \
	ft_putstr_fd.c \
	ft_strncmp.c \
	ft_itoa.c \
	ft_split.c \
	ft_strnstr.c \
	ft_memchr.c \
	ft_strchr.c	\
	ft_strrchr.c

B_SRCS = ft_lstnew_bonus.c\
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstmap_bonus.c

OBJS = ${SRCS:.c=.o}

B_OBJS = ${B_SRCS:.c=.o}

FLAGS = -Wall -Wextra -Werror

CC = cc

all: ${NAME}

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} -c ${SRCS}

bonus: .bonus

.bonus: ${B_OBJS}
	ar -r ${NAME} ${B_OBJS}
	touch .bonus

${B_OBJS}: ${B_SRCS}
	${CC} ${FLAGS} -c ${B_SRCS}

clean:
	rm -f ${OBJS} ${B_OBJS}
	rm -f .bonus

fclean: clean
	rm -f ${NAME}

re: fclean all