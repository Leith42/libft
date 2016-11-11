/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:54:09 by aazri             #+#    #+#             */
/*   Updated: 2016/11/11 18:25:19 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t num)
{
    while (*str1 && *str1 == *str2 && num--)
    {
        str1++;
        str2++;
    }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}
