/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:23:31 by tmadau            #+#    #+#             */
/*   Updated: 2018/05/31 17:21:59 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_islower(int c);
int		ft_isupper(int c);

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void	*b, int c, size_t len);

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);

int		ft_atoi(const char *str);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);

void	*ft_memcpy(void	*dst, const void *src, size_t n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
