/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:25:06 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/10 12:52:53 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//TODOS LOS IS...
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
//TODOS LOS TO...
char	ft_tolower(int c);
char	ft_toupper(int c);
//TODOS LOS STR...
int		ft_strlen(const char *str);
int		ft_strlcpy(char *dest, const char *src, size_t destsize);
int		ft_strlcat(char *dest, const char *src, size_t destsize);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*t_strchr(const char *s, int c);
//TODOS LOS MEM...
char	*ft_memset(char *point, char c, int n);
char	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_memmove(void *dest, const void *src, unsigned long n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
//EXTRA
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);

#endif