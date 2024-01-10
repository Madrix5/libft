/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:05:41 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/10 16:08:24 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;
	size_t		i;
	int			dlen;
	int			slen;

	d = (char *)dest;
	s = (char *)src;
	dlen = ft_strlen(d);
	slen = ft_strlen(s);
	i = 0;
	if (dlen >= slen)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
