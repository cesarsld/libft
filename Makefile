# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjaimes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/19 14:55:10 by cjaimes           #+#    #+#              #
#    Updated: 2019/06/19 15:23:44 by cjaimes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ROOT	=	./srcs/

HROOT	=	includes

FILES	=	ft_putchar.c
FILES	+=	ft_putstr.c
FILES	+=	ft_putendl.c
FILES	+=	ft_putnbr.c
FILES	+=	ft_putchar_fd.c
FILES	+=	ft_putstr_fd.c
FILES	+=	ft_putendl_fd.c
FILES	+=	ft_putnbr_fd.c

FILES	+=	ft_strcmp.c
FILES	+=	ft_strncmp.c

FILES	+=	ft_strcpy.c
FILES	+=	ft_strncpy.c

FILES	+=	ft_strcat.c
FILES	+=	ft_strncat.c
FILES	+=	ft_strlcat.c

FILES	+=	ft_strstr.c
FILES	+=	ft_strnstr.c

FILES	+=	ft_strchr.c
FILES	+=	ft_strrchr.c

FILES	+=	ft_strdup.c
FILES	+=	ft_strnew.c
FILES	+=	ft_strdel.c
FILES	+=	ft_strclr.c
FILES	+=	ft_striter.c
FILES	+=	ft_striteri.c
FILES	+=	ft_strmap.c
FILES	+=	ft_strmapi.c
FILES	+=	ft_strequ.c
FILES	+=	ft_strnequ.c
FILES	+=	ft_strsub.c
FILES	+=	ft_strjoin.c
FILES	+=	ft_strtrim.c
FILES	+=	ft_strsplit.c



FILES	+=	ft_strlen.c

FILES	+=	ft_swap.c
FILES	+=	ft_atoi.c
FILES	+=	ft_itoa.c

FILES	+=	ft_isascii.c
FILES	+=	ft_isprint.c
FILES	+=	ft_isupper.c
FILES	+=	ft_islower.c
FILES	+=	ft_toupper.c
FILES	+=	ft_tolower.c
FILES	+=	ft_isdigit.c
FILES	+=	ft_isalpha.c
FILES	+=	ft_isalnum.c

FILES	+=	ft_memset.c
FILES	+=	ft_bzero.c
FILES	+=	ft_memcpy.c
FILES	+=	ft_memccpy.c
FILES	+=	ft_memmove.c
FILES	+=	ft_memchr.c
FILES	+=	ft_memcmp.c

FILES	+=	ft_memalloc.c
FILES	+=	ft_memdel.c

FILES	+=	ft_strndup.c

FILES	+=	ft_lstnew.c
FILES	+=	ft_lstdelone.c
FILES	+=	ft_lstdel.c
FILES	+=	ft_lstadd.c
FILES	+=	ft_lstiter.c
FILES	+=	ft_lstmap.c

SRCS	=	$(addprefix ${ROOT}, ${FILES})

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror -I ${HROOT}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all