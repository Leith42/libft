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

char	*ft_utoa_base(uintmax_t nb, unsigned int base)
{
	char			*ret;
	static unsigned int	loop;
	static unsigned int	i;
	uintmax_t		mem;

	if (base < 2 || base > 36)
		return (NULL);
	if (nb == 0)
	{
		if ((ret = ft_memalloc(loop > 0 ? loop + 1 : 2)) == NULL)
			return (NULL);
		if (loop == 0)
			ret[0] = '0';
		loop = 0;
		i = 0;
		return (ret);
	}
	loop++;
	mem = nb % base;
	ret = ft_utoa_base(nb / base, base);
	ret[i++] = (mem < 10) ? (char)mem + '0' : (char)mem - 10 + 'a';
	return (ret);
}
