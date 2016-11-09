/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:49:33 by aazri             #+#    #+#             */
/*   Updated: 2016/11/09 16:14:20 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char *str;
    size_t i;

    i = 0;
    if (s && f)
    {
        str = (char *)malloc(sizeof(str) * ft_strlen(s));
        while(i < ft_strlen(s))
        {
            str[i] = f(i, str[i]);
            i++;
        }
        return (str);
    }
    return (NULL);
}
