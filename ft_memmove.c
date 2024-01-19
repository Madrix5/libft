/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:05:41 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/19 16:50:40 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(void *dest, const void *src, size_t len)
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
	if (d >= s)
	{
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
