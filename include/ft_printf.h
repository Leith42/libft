/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leith <leith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:22:19 by leith             #+#    #+#             */
/*   Updated: 2017/03/25 15:30:49 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdarg.h>
# include <wchar.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

/*
** Macros
*/
# define BASE_OCTAL 8
# define BASE_DECIMAL 10
# define BASE_HEXADECIMAL 16

/*
** Struct
*/
typedef struct	s_flags
{
	bool		force_prefix;
	bool		pad_zeroes;
	bool		right_pad;
	bool		force_sign;
	bool		blank_sign;
	bool		got_width;
	bool		got_precision;
	unsigned	width;
	unsigned	precision;
	unsigned	base;
	char		*sign;
	enum {
		none,
		hh,
		h,
		l,
		ll,
		j,
		z
	}			length;
}				t_flags;

typedef struct	s_format
{
	const char	*string;
	size_t		pos;
	size_t		written;
}				t_format;

typedef struct	s_func
{
	int			(*ptrfunc)(t_format *, va_list, t_flags *);
	char		key;
}				t_func;

/*
** Main
*/
int			ft_printf(const char *format, ...);

/*
** Handle errors
*/
int			valid_format(t_format format);

/*
** Parsing
*/
int			handle_flags(t_format *format, va_list arguments, t_flags *flags);
void		parse_flags(t_format *s, t_flags *flags);
void		parse_width(t_format *f, va_list list, t_flags *flags);
void		parse_precision(t_format *f, va_list list, t_flags *flags);
void		parse_length(t_format *f, t_flags *flags);

/*
** Utils
*/
unsigned	adapt_width(t_flags *f, size_t preci, uintmax_t nb, size_t *nb_len);
unsigned	adapt_precision(t_flags *flags, size_t nb_len);
size_t		ft_nbulen(unsigned long n, unsigned int base);
size_t		ft_nblen(long n, unsigned int base);
void		width_pad(int nb_len, int width, char padwith, char *sign);
void		print_base(uintmax_t nb, unsigned int base);
int			print_count(size_t n_len, size_t pad_len, t_flags *f, uintmax_t nb);
char		*get_str_to_print(char *hex, char specifier);

/*
** Handle specifier
*/
int			spec_d(t_format *format, va_list arguments, t_flags *flags);
int			spec_u(t_format *format, va_list arguments, t_flags *flags);
int			spec_o(t_format *format, va_list arguments, t_flags *flags);
int			spec_x(t_format *format, va_list arguments, t_flags *flags);
int			spec_c(t_format *format, va_list arguments, t_flags *flags);
int			spec_s(t_format *format, va_list arguments, t_flags *flags);
int			spec_p(t_format *format, va_list arguments, t_flags *flags);

/*
** Handle base 10 & base 8 integer
*/
size_t		handle_integer(uintmax_t nb, t_flags *flags);
void		handle_pad(size_t nb_len, t_flags *flags, uintmax_t nb);

/*
** Handle base 16 integer
*/
int			hex_handle_pad(t_flags *flags, char specifier, char *hex);
int			hex_double_pad(size_t h_len, t_flags *flags, char spec, char *hex);
void		hex_simple_pad(size_t h_len, t_flags *flags, char *hex);
/*
** Handle length
*/
intmax_t	signed_specifier(va_list arguments, t_flags *flags);
uintmax_t	unsigned_specifier(va_list arguments, t_flags *flags, char spec);

/*
** Get an array of functions
*/
t_func		*get_func_array(void);

/*
** Utils for wide characters
*/
unsigned	wchar_len(wchar_t wchar);
void		ft_putwchar(wint_t wchar);
void		ft_putnwstr(wchar_t *wstring, unsigned int max);
size_t		ft_wstrlen(wchar_t *wstring);

#endif
