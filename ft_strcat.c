/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 23:18:33 by aazri             #+#    #+#             */
/*   Updated: 2016/11/08 13:22:37 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*buffDest;
	char	*buffSrc;

	buffDest = dest;
	buffSrc = (char *)src;
	while (*buffDest != '\0')
		buffDest++;
	while (*buffSrc != '\0')
	{
		*buffDest = *buffSrc;
		buffDest++;
		buffSrc++;
	}
	*buffDest = '\0';
	return (dest);
}

int main ()
{
  char str[20];
  ft_strcpy (str,"these ");
  ft_strcat (str,"strings ");
  ft_strcat (str,"are ");
  ft_strcat (str,"concatenated.");
  puts (str);
  return 0;
}
