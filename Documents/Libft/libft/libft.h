/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awicks <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 06:44:20 by awicks            #+#    #+#             */
/*   Updated: 2017/07/28 09:19:39 by awicks           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>
#include "list.h"

int			ft_atoi(const char *str);
void		ft_putchar(char c);
void		ft_putendl(const char *s);
void		ft_putnbr(int n);
void		ft_putstr(const char *s);
const char	*ft_strchr(const char *big, int c);
void		ft_strclr(char *s);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strlen(const char *s);
char		*ft_strncpy(char *dst, const char *src, size_t len);
const char	*ft_strstr(const char *big, const char *little);
void		ft_bzero(void *b, size_t len);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(const char *s, int fd);
char		*ft_strcat(char *s1, const char *s2);
int			*ft_strcmp(char *s1, char *s2);
void		ft_strdel(char **as);
char		*ft_strdup(char *str);
int			ft_strequ(char const *s1, char const *s2);
void		ft_striter(char *s, void(*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(const char *s1,const char *s2, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
const char	*ft_strnstr(const char *big, const char *little, size_t k);
const char	*ft_strrchr(const char *big, int c);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
int			ft_tolower(int c);
int			ft_toupper(int c);
char		**ft_strsplit(char const *s, char a);
t_node		*ft_lst_newnode(void);
void		ft_lst_newafter(t_node **head);
t_node		*ft_lst_search(t_node *head, int i);
void		ft_lst_insafter(t_node *head, int i);
void		ft_lst_rmvafter(t_node *head);
int			ft_strcpy_buffer(char *dest, char *src, int x);
void		ft_lst_switch(t_node **head, int i, int x);
void		ft_lst_sort(t_node **head, int (*f)(t_node *p_1, t_node *p_2));

#endif
