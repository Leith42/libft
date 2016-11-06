/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 16:20:06 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 16:33:02 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_memset(void *ptr, int value, size_t n)
{
    size_t i;
    unsigned char *str;

    i = 0;
    str = ptr;
    while(i < n)
    {
        str[i] = value;
        i++;
    }
}
