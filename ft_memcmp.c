/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:48:58 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 16:04:41 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (s1 == NULL && s2 == NULL)
        return (0);
    size_t  i;
    unsigned char   *ptr1;
    unsigned char   *ptr2;

    i = 0;
    ptr1 = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    while (n--)
    {
        if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
        i++;
    }
    return (0);
}
