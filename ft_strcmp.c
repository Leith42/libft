/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:52:25 by aazri             #+#    #+#             */
/*   Updated: 2016/11/11 18:25:02 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_strcmp(const char *str1, const char *str2)
{
    while (*str1 && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return ((unsigned char)*str1 - (unsigned char)*str2);
}
