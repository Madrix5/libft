/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:24:45 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/18 19:48:51 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	unsigned char	*s;
	unsigned char	r;

	s = (unsigned char *)b;
	r = c;
	i = 0;
	if (n == 0)
		return (b);
	while (i <= n)
	{
		s[i] = c;
		i++;
	}
	return ((void *)s);
}
