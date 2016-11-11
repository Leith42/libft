/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:39:29 by aazri             #+#    #+#             */
/*   Updated: 2016/11/11 15:51:48 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    char   *des;
    char   *sr;

    i = 0;
    des = (char *)dest;
    sr = (char *)src;
    while (i < n)
    {
        if ((*des++ = *sr++) == c)
            return (des);
        i++;
    }
    return (NULL);
}
