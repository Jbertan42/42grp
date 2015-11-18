# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbertran <jbertran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/05 19:19:08 by jbertran          #+#    #+#              #
#    Updated: 2015/10/02 12:47:27 by jbertran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = clang
CFLAGS = -Wall -Wextra -Werror
C_FILES = ft_atof.c \
		  ft_atoi.c \
		  ft_atoli.c \
		  ft_atoui_base.c \
		  ft_bzero.c \
		  ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_itoa.c \
		  ft_litoa.c \
		  ft_lstadd.c \
		  ft_lstadd_back.c \
		  ft_lstcpy.c \
		  ft_lstdel.c \
		  ft_lstdelone.c \
		  ft_lstiter.c \
		  ft_lstmap.c \
		  ft_lstnew.c \
		  ft_magnitude.c \
		  ft_memalloc.c \
		  ft_memccpy.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memdel.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_putchar.c \
		  ft_putchar_fd.c \
		  ft_putdigit_base.c \
		  ft_putdigit_base_fd.c \
		  ft_putendl.c \
		  ft_putendl_fd.c \
		  ft_putlnbr_base.c \
		  ft_putlnbr_base_fd.c \
		  ft_putnbr.c \
		  ft_putnbr_base.c \
		  ft_putnbr_base_fd.c \
		  ft_putnbr_fd.c \
		  ft_putstr.c \
		  ft_putstr_fd.c \
		  ft_realloc.c \
		  ft_strcat.c \
		  ft_strchr.c \
		  ft_strclr.c \
		  ft_strcmp.c \
		  ft_strcpy.c \
		  ft_strdel.c \
		  ft_strdup.c \
		  ft_strequ.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strjoin.c \
		  ft_strlcat.c \
		  ft_strlen.c \
		  ft_strmap.c \
		  ft_strmapi.c \
		  ft_strncat.c \
		  ft_strncmp.c \
		  ft_strncpy.c \
		  ft_strnequ.c \
		  ft_strnew.c \
		  ft_strnstr.c \
		  ft_strrchr.c \
		  ft_strsplit.c \
		  ft_strstr.c \
		  ft_strsub.c \
		  ft_strtoupper.c \
		  ft_strtrim.c \
		  ft_tolower.c \
		  ft_toupper.c \
		  ft_uitoa_base.c \
		  ft_ulitoa_base.c
SRCS = $(addprefix srcs/,$(C_FILES))
O_FILES = $(C_FILES:.c=.o)
OBJ = $(addprefix obj/,$(O_FILES))
H_FILES = libft.h \
		  libft_structs.h
INCLUDES = $(addprefix includes/,$(H_FILES))

.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj/%.o: srcs/%.c $(INCLUDES)
	@mkdir -p obj
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -rf obj

re: fclean all
