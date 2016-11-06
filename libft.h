/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:15:38 by aazri             #+#    #+#             */
/*   Updated: 2016/11/06 17:39:43 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_atoi(const char *str);
int     ft_strcmp(const char *str1, const char *str2);
int     ft_strncmp(const char *str1, const char *str2, size_t num);
char    *ft_strstr(const char *str, const char *find);
size_t  ft_strlen(const char *str);
char    *ft_strrchr (const char *str, int letter);
char    *ft_strchr (const char *str, int letter);
char    *ft_strcpy(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t num);
char    *ft_strcat(char *dest, const char *src);
char	*ft_strdup(const char *src);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *str, int tofind, size_t n);
void    ft_memset(void *ptr, int value, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);

#endif
