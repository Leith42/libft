/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:23:19 by aazri             #+#    #+#             */
/*   Updated: 2016/11/07 18:20:21 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t     i;
    char       *des;
    const char *sr;

    i = 0;
    des = dest;
    sr = src;
    while (i < n)
    {
        des[i] = sr[i];
        i++;
    }
    return (dest);
}
