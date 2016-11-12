/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:09:54 by aazri             #+#    #+#             */
/*   Updated: 2016/11/12 20:37:12 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		b;
    size_t		len;
	char        *buff;
	if (s)
	{
		i = 0;
		len = ft_strlen((char *)s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		buff = (char *)malloc(sizeof(char) * (len - i + 1));
        if (!buff)
            return (NULL);
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			len--;
		b = 0;
		while (i <= len)
		{
			buff[b] = s[i];
			i++;
			b++;
		}
		buff[b] = '\0';
		return (buff);
	}
	return (NULL);
}

int main()
{
    puts(ft_strtrim("     \n\t \t     Je suis      une string    \t\n"));
    puts(ft_strtrim(""));
    return 0;
}
