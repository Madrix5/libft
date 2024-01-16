/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:34 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/15 14:47:44 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*sc1;
	const char	*sc2;
	size_t		i;

	sc1 = s1;
	sc2 = s2;
	i = 0;
	while (sc1[i] != '\0' && sc2[i] != '\0' && i < n)
	{
		if (sc1[i] != sc2[i])
			return (sc1[i] - sc2[i]);
	}
	return (sc1[i] - sc2[i]);
}
