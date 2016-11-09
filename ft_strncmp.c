/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:54:09 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 15:41:25 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t num)
{
    size_t i;

    i = 0;
    while (str1[i] && str2[i] && str1[i] == str2[i] && --num)
        i++;
    return (str1[i] - str2[i]);
}
