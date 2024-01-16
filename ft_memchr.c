/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:45:14 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/15 14:38:56 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*sc;
	unsigned char	ic;
	size_t			i;

	i = 0;
	sc = s;
	ic = c;
	while (sc[i] != '\0' && i < n)
	{
		if (sc[i] == ic)
			return ((void *)&sc[i]);
		i++;
	}
	return (0);
}
