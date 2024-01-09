/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:05:41 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/09 20:22:21 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*d;
	char			*s;
	unsigned int	i;
	int				dlen;
	int				slen;

	d = (char *)dest;
	s = (char *)src;
	dlen = ft_strlen(d);
	slen = ft_strlen(s);
	i = 0;
	if (dlen >= slen)
	{
		while (i < n)
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
	return (dest);
}
