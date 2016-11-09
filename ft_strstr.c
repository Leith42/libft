/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:19:45 by aazri             #+#    #+#             */
/*   Updated: 2016/11/08 17:13:00 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char    *ft_strstr(const char *str, const char *find)
{
    size_t i;
    size_t j;

    i = 0;
    while(str[i])
    {
        j = 0;
        while (str[i] == find[j])
        {
            i++;
            j++;
        }
        if (j == ft_strlen(find))
            return (char *)(&str[i - j]);
        i++;
    }
    return (NULL);
}
