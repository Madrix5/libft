/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:28 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/23 05:19:10 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*string;
	size_t	i;

	i = 0;
	string = malloc(sizeof(size) * count);
	if (!string)
		return (NULL);
	if (count * size == 0)
		return (NULL);
	if (!string)
		return (NULL);
	while (i < (count))
	{
		string[i] = 0;
		i++;
	}
	return (string);
}
