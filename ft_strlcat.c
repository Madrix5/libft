/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:38:53 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/10 18:52:13 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	i = 0;
	if (destsize < dest_l)
		return (src_l + destsize);
	else
	{
		while (src[i] != '\0' && destsize + i < destsize - 1)
		{
			dest[destsize + i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest_l + i);
}
