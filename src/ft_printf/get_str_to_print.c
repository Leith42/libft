/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str_to_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 14:09:29 by aazri             #+#    #+#             */
/*   Updated: 2017/08/18 17:25:14 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_str_to_print(char *hex, char specifier)
{
	if (specifier == 'x' || specifier == 'p')
		return (ft_strdup(ft_strtolower(hex)));
	else
		return (ft_strdup(hex));
}
