/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_octal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 15:52:32 by aazri             #+#    #+#             */
/*   Updated: 2017/08/18 17:24:44 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*assign_prefix(t_pf_flags *flags)
{
	if (flags->force_prefix == true && flags->precision == 0)
		return ("0");
	return (NULL);
}

int			spec_o(t_format *format, va_list arguments, t_pf_flags *flags)
{
	uintmax_t	octal;

	if (format->string[format->pos] == 'O')
	{
		flags->length = l;
	}
	flags->base = BASE_OCTAL;
	octal = unsigned_specifier(arguments, flags, format->string[format->pos]);
	flags->sign = assign_prefix(flags);
	format->written += handle_integer(octal, flags);
	format->pos++;
	return (OK);
}
