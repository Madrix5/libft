/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:28 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/15 17:25:05 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*string;
	size_t	i;

	i = 0;
	string = malloc(count * size);
	if (count * size == 0)
		return (0);
	if (!string)
		return (0);
	while (i < (count))
	{
		string[i] = 0;
		printf("-memoria numero: %zu\n -valor:%c\n", i, string[i]);
		i++;
	}
	return (string);
}
