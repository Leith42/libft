/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:07:20 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 14:10:32 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t num)
{
    size_t i;

    i = 0;
    while(src[i] && num--)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = src[i];
    return (dest);
}
