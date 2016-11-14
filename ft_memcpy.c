/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:23:19 by aazri             #+#    #+#             */
/*   Updated: 2016/11/14 15:36:13 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t              i;
    unsigned char       *des;
    unsigned const char *sr;

    i = 0;   
    des = (unsigned char *)dest;
    sr = (unsigned const char *)src;
    while (i < n)
    {
        des[i] = sr[i];
        i++;
    }
    return (dest);
}
