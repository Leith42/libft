/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:09:54 by aazri             #+#    #+#             */
/*   Updated: 2016/11/11 21:01:32 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s)
{
    char *str;
    size_t i;
    size_t b;
    size_t len;

    i = 0;
    b = 0;
    len = ft_strlen(s);
    if(len <= 1)
        return ((char *)s);
    while(s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
        i++;
    while(s[len] == ' ' || s[len] == '\t' || s[len] == '\n')
        len--;
    str = malloc(len - i + 1);
    if(str == NULL)
        return (NULL);
    while(i < len)
    {
        str[b] = s[i];
        i++;
        b++;
    }
    str[b] = '\0';
    return (str);
}
