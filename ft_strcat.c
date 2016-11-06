/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:18:33 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 14:16:14 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    size_t i;
    size_t b;

    i = 0;
    b = 0;
    while(dest[i])
        i++;
    while(src[b])
    {
        dest[i] = src[b];
        i++;
        b++;
    }
    dest[i] = '\0';
    return (dest);
}
