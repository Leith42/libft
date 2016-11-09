/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 17:27:54 by aazri             #+#    #+#             */
/*   Updated: 2016/11/07 18:23:33 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove (void *dest, const void *src, size_t num)
{
	unsigned char	buffer[num];

	ft_memcpy(buffer, src, num);
	ft_memcpy(dest, buffer, num);
	return (dest);
}
