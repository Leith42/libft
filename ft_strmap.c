/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:19:25 by aazri             #+#    #+#             */
/*   Updated: 2016/11/11 15:13:29 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmap(char const *s, char (*f)(char))
{
    char *str;
    size_t i;

    i = 0;
    if (s && f)
    {
        str = (char *)malloc(sizeof(str) * ft_strlen(s));
        while(i < ft_strlen(s))
        {
            str[i] = f(str[i]);
            i++;
        }
        return (str);
    }
    return (NULL);
}
