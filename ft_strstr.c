/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:19:45 by aazri             #+#    #+#             */
/*   Updated: 2016/11/05 22:42:09 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *str, const char *find)
{
    int i;
    int j;

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
