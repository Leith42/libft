# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aazri <aazri@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/17 17:35:54 by aazri             #+#    #+#              #
#    Updated: 2017/06/09 16:39:39 by aazri            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
MAKEFLAGS = --silent
INCLUDE = -I./include/
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)
LIBFT_PATH = ./src/
EXTRA_PATH = $(LIBFT_PATH)extra/
PRINTF_PATH = $(LIBFT_PATH)ft_printf/
GNL_PATH = $(LIBFT_PATH)get_next_line/
RM = rm -f

LIBFT_SRC =	\
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \

EXTRA_SRC = \
		ft_strndup.c \
		ft_sqroot.c \
		ft_strtolower.c \
		ft_strtoupper.c \
		ft_strrev.c \
		ft_putlnbr.c \
		ft_putulnbr.c \
		ft_itoa_base.c \
		ft_utoa_base.c \
		ft_putnstr.c \
		ft_lstrev.c \
		ft_lstcount.c \
		ft_atol.c \

GNL_SRC = \
		get_next_line.c \

PRINTF_SRC = \
		ft_printf.c \
		decimal_pad.c \
		get_func_array.c \
		get_str_to_print.c \
		handle_char.c \
		handle_decimal.c \
		handle_hexadecimal.c \
		handle_octal.c \
		handle_string.c \
		hex_pad.c \
		length_specifier.c \
		parsing_flags.c \
		print_count.c \
		utils.c \
		utils_wchar.c \
		handle_color.c \

LIBFT_OBJ =	$(LIBFT_SRC:.c=.o)
EXTRA_OBJ = $(EXTRA_SRC:.c=.o)
GNL_OBJ = $(GNL_SRC:.c=.o)
PRINTF_OBJ = $(PRINTF_SRC:.c=.o)

LIBFT = $(addprefix $(LIBFT_PATH), $(LIBFT_OBJ))
EXTRA = $(addprefix $(EXTRA_PATH), $(EXTRA_OBJ))
GNL = $(addprefix $(GNL_PATH), $(GNL_OBJ))
PRINTF = $(addprefix $(PRINTF_PATH), $(PRINTF_OBJ))

all: $(NAME)

$(NAME): $(LIBFT) $(EXTRA) $(GNL) $(PRINTF)
	ar rc $(NAME) $(LIBFT) $(EXTRA) $(GNL) $(PRINTF)
	ranlib $(NAME)
	echo "  _      _____ ____  ______ _______"
	echo " | |    |_   _|  _ \|  ____|__   __|"
	echo " | |      | | | |_) | |__     | |"
	echo " | |      | | |  _ <|  __|    | |"
	echo " | |____ _| |_| |_) | |       | |"
	echo " |______|_____|____/|_|       |_|"
	echo " "
	echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	$(RM) $(LIBFT) $(EXTRA) $(GNL) $(PRINTF)
	echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean:
	$(RM) $(LIBFT) $(EXTRA) $(GNL) $(PRINTF) $(NAME)
	echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: all clean fclean re
