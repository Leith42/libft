# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazri <aazri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 17:35:54 by aazri             #+#    #+#              #
#    Updated: 2017/03/25 14:53:24 by aazri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
INCLUDE = -I./include/
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)
SRC_PATH = ./src/
EXTRA_PATH = $(SRC_PATH)extra/
PRINTF_PATH = $(SRC_PATH)ft_printf/
GNL_PATH = $(SRC_PATH)get_next_line/
RM = rm -f

SRC =	\
		$(SRC_PATH)ft_memset.c \
		$(SRC_PATH)ft_bzero.c \
		$(SRC_PATH)ft_memcpy.c \
		$(SRC_PATH)ft_memccpy.c \
		$(SRC_PATH)ft_memmove.c \
		$(SRC_PATH)ft_memchr.c \
		$(SRC_PATH)ft_memcmp.c \
		$(SRC_PATH)ft_memalloc.c \
		$(SRC_PATH)ft_memdel.c \
		$(SRC_PATH)ft_strlen.c \
		$(SRC_PATH)ft_strdup.c \
		$(SRC_PATH)ft_strcpy.c \
		$(SRC_PATH)ft_strncpy.c \
		$(SRC_PATH)ft_strcat.c \
		$(SRC_PATH)ft_strncat.c \
		$(SRC_PATH)ft_strlcat.c \
		$(SRC_PATH)ft_strchr.c \
		$(SRC_PATH)ft_strrchr.c \
		$(SRC_PATH)ft_strstr.c \
		$(SRC_PATH)ft_strnstr.c \
		$(SRC_PATH)ft_strcmp.c \
		$(SRC_PATH)ft_strncmp.c \
		$(SRC_PATH)ft_atoi.c \
		$(SRC_PATH)ft_isalpha.c \
		$(SRC_PATH)ft_isdigit.c \
		$(SRC_PATH)ft_isalnum.c \
		$(SRC_PATH)ft_isascii.c \
		$(SRC_PATH)ft_isprint.c \
		$(SRC_PATH)ft_toupper.c \
		$(SRC_PATH)ft_tolower.c \
		$(SRC_PATH)ft_strnew.c \
		$(SRC_PATH)ft_strdel.c \
		$(SRC_PATH)ft_strclr.c \
		$(SRC_PATH)ft_striter.c \
		$(SRC_PATH)ft_striteri.c \
		$(SRC_PATH)ft_strmap.c \
		$(SRC_PATH)ft_strmapi.c \
		$(SRC_PATH)ft_strequ.c \
		$(SRC_PATH)ft_strnequ.c \
		$(SRC_PATH)ft_strsub.c \
		$(SRC_PATH)ft_strjoin.c \
		$(SRC_PATH)ft_strtrim.c \
		$(SRC_PATH)ft_strsplit.c \
		$(SRC_PATH)ft_putchar.c \
		$(SRC_PATH)ft_putstr.c \
		$(SRC_PATH)ft_putendl.c \
		$(SRC_PATH)ft_putnbr.c \
		$(SRC_PATH)ft_putchar_fd.c \
		$(SRC_PATH)ft_putstr_fd.c \
		$(SRC_PATH)ft_putendl_fd.c \
		$(SRC_PATH)ft_putnbr_fd.c \
		$(SRC_PATH)ft_itoa.c \
		$(SRC_PATH)ft_lstnew.c \
		$(SRC_PATH)ft_lstdelone.c \
		$(SRC_PATH)ft_lstdel.c \
		$(SRC_PATH)ft_lstadd.c \
		$(SRC_PATH)ft_lstiter.c \
		$(SRC_PATH)ft_lstmap.c \

EXTRA_SRC = \
		$(EXTRA_PATH)ft_strndup.c \
		$(EXTRA_PATH)ft_sqroot.c \
		$(EXTRA_PATH)ft_strtolower.c \
		$(EXTRA_PATH)ft_strtoupper.c \
		$(EXTRA_PATH)ft_strrev.c \
		$(EXTRA_PATH)ft_putlnbr.c \
		$(EXTRA_PATH)ft_putulnbr.c \
		$(EXTRA_PATH)ft_itoa_base.c \
		$(EXTRA_PATH)ft_utoa_base.c \
		$(EXTRA_PATH)ft_putnstr.c \

GNL_SRC = \
		$(GNL_PATH)get_next_line.c \

PRINTF_SRC = \
		$(PRINTF_PATH)ft_printf.c \
		$(PRINTF_PATH)decimal_pad.c \
		$(PRINTF_PATH)get_func_array.c \
		$(PRINTF_PATH)get_str_to_print.c \
		$(PRINTF_PATH)handle_char.c \
		$(PRINTF_PATH)handle_decimal.c \
		$(PRINTF_PATH)handle_hexadecimal.c \
		$(PRINTF_PATH)handle_octal.c \
		$(PRINTF_PATH)handle_string.c \
		$(PRINTF_PATH)hex_pad.c \
		$(PRINTF_PATH)length_specifier.c \
		$(PRINTF_PATH)parsing_flags.c \
		$(PRINTF_PATH)print_count.c \
		$(PRINTF_PATH)utils.c \
		$(PRINTF_PATH)utils_wchar.c \

OBJ =	$(SRC:.c=.o) \
		$(EXTRA_SRC:.c=.o) \
		$(GNL_SRC:.c=.o) \
		$(PRINTF_SRC:.c=.o) \

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
