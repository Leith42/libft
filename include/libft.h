/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazri <aazri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 17:49:53 by aazri             #+#    #+#             */
/*   Updated: 2017/06/11 15:27:25 by aazri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <inttypes.h>
# include "get_next_line.h"
# include "ft_printf.h"

/*
** MACROS
*/
# define ABS(x) ((x < 0)) ? -(x) : (x)
# define MIN(x, y) ((x < y)) ? (x) : (y)
# define MAX(x, y) ((x > y)) ? (x) : (y)
# define ERROR -1
# define OK true

/*
**	Basic linked list
*/
typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** Some standard functions (or not...)
*/
void			ft_bzero(void *ptr, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
int				ft_tolower(int c);
int				ft_toupper(int c);
int				ft_isprint(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_atoi(const char *str);
int				ft_strcmp(const char *str1, const char *str2);
int				ft_strncmp(const char *str1, const char *str2, size_t num);
char			*ft_strstr(const char *str, const char *find);
char			*ft_strnstr(const char *str, const char *find, size_t len);
size_t			ft_strlen(const char *str);
char			*ft_strrchr (const char *str, int letter);
char			*ft_strchr (const char *str, int letter);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strncat(char *dest, const char *src, size_t num);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strdup(const char *src);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *str, int tofind, size_t n);
void			*ft_memset(void *ptr, int value, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove (void *dest, const void *src, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t num);
void			ft_strdel(char **as);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
void			ft_putendl(char const *s);
void			ft_putstr(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putendl_fd(char const *s, int fd);
char			*ft_itoa(int n);

/*
** Linked lists functions
*/
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new_list);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t			ft_lstcount(t_list *lst);
void			ft_lstrev(t_list **begin_list);
void			ft_lstsort(t_list **headref, int (*cmp)(t_list *a, t_list *b));
int				ft_lexic_cmp(t_list *a, t_list *b);
int				ft_rlexic_cmp(t_list *a, t_list *b);

/*
** Extras functions
*/
char			*ft_strndup(const char *src, int n);
int				ft_sqroot(int n);
char			*ft_strtolower(char *str);
char			*ft_strtoupper(char *str);
char			*ft_strrev(char *str);
void			ft_putulnbr(unsigned long nb);
void			ft_putlnbr(long nb);
char			*ft_itoa_base(intmax_t n, unsigned int base);
char			*ft_utoa_base(uintmax_t n, unsigned int base);
void			ft_putnstr(char const *str, size_t len);
intmax_t		ft_atol(const char *str, unsigned int base);
void			ft_cls(void);

#endif
