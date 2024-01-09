/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:24:45 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/09 16:33:07 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(char *point, char c, int n)
{
	int	count;

	count = 0;
	while (count <= n)
	{
		point[count] = c;
		count++;
	}
	return (point);
}
