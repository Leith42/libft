/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:09:54 by aazri             #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2016/11/14 17:18:36 by aazri            ###   ########.fr       */
=======
/*   Updated: 2016/11/13 15:13:19 by aazri            ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_fill(size_t i, size_t len, char *buff, char const *s)
{
	size_t b;

	b = 0;
	if (*s == '\0')
		return ((char *)s);
	while (i <= len)
	{
		buff[b] = s[i];
		i++;
		b++;
	}
	buff[b] = '\0';
	return (buff);
}

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		len;
	char        *buff;

	if (s)
	{
		i = 0;
		len = ft_strlen((char *)s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (i == len + 1)
			return ("");
		buff = (char *)malloc(sizeof(char) * (len - i + 1));
        if (!buff)
            return (NULL);
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
			len--;
		return (ft_fill(i, len, buff, s));
	}
	return (NULL);
}
