/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 18:08:31 by aazri             #+#    #+#             */
/*   Updated: 2017/06/19 17:48:42 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(intmax_t nb, unsigned int base)
{
	char		*tmp;
	char		*ret;
	uintmax_t	nb_cpy;

	nb_cpy = (uintmax_t)(nb < 0) ? nb * -1 : nb;
	if ((ret = ft_utoa_base(nb_cpy, base)) != NULL)
	{
		if (nb < 0 && base == BASE_DECIMAL)
		{
			if ((tmp = ft_strjoin("-", ret)) == NULL)
			{
				return (NULL);
			}
			ft_memdel((void**)&ret);
			ret = tmp;
		}
	}
	return (ret);
}
