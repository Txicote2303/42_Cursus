# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frcarval <frcarval@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 17:40:50 by frcarval          #+#    #+#              #
#    Updated: 2022/01/17 22:17:15 by frcarval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	=	ft_atoi.c		\
			ft_bzero.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strdup.c		\
			ft_calloc.c		\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c 	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_split.c

BONUS	=	ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstclear.c		\
			ft_lstdelone.c		\
			ft_lstmap.c			\
			ft_lstiter.c
			
NAME 	=	libft.a
OBJECTS	=	$(SOURCES:.c=.o)
BONUS.O	=	$(BONUS:.c=.o)
GCCW	=	gcc	-Wall -Wextra -Werror -I.

.c.o:
	$(GCCW) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

bonus:		$(NAME) $(BONUS.O)
			ar -rcs $(NAME) $(BONUS.O)

clean:		
			rm -f $(OBJECTS) $(BONUS.O)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re
