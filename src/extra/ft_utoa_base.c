/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:30:17 by aazri             #+#    #+#             */
/*   Updated: 2017/03/24 14:52:13 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(uintmax_t n, unsigned int base)
{
	char		buff[24];
	char		*str;
	int			i;
	uintmax_t	n_tmp;

	i = 0;
	n_tmp = n;
	while (n_tmp)
	{
		buff[i++] = n_tmp % base + '0';
		n_tmp = n_tmp / base;
	}
	if (!(str = ft_memalloc(i + 2)))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	while (--i >= 0)
		str[n_tmp++] = buff[i];
	return (str);
}
