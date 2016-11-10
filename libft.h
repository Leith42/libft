/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:15:38 by aazri             #+#    #+#             */
/*   Updated: 2016/11/10 15:21:01 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>

//PART 1
void    ft_bzero(void *ptr, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
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
char	*ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t num);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *src);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *str, int tofind, size_t n);
void    *ft_memset(void *ptr, int value, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove (void *dest, const void *src, size_t num);
char    *ft_strncpy(char *dest, const char *src, size_t num);
//PART 2
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strclr(char *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char(*f)(unsigned int, char));
int      ft_strequ(char const *s1, char const *s2);
int      ft_strnequ(char const *s1, char const *s2, size_t n);
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);

#endif
