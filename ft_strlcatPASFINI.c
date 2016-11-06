/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:43:14 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 13:58:13 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(void)
{
   char dest[20] = "Une chaine ";
   char src[] = "ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ceci est une chaine qui ne rentre pas dans dest ";

   strcat(dest, src);
   printf("%s\n", dest);

   return 0;
}
