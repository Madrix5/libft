/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:31:15 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/17 21:23:42 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_malloc(int cont)
{
	char	*final;
	
	final = malloc((sizeof(char) * (cont + 1)));
	if (!final)
		return (NULL);
	return (final);
}

static int	lenght(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	i;
	int	j;
	int	c_start;
	int	c_final;
	int	n;
	char	*str;
	
	len = lenght(s1);
	i = 0;
	j = 0;
	c_start = 0;
	c_final = 0;
	while (set[i])
	{
		if (s1[0] == set[i])
		{
			while (s1[j] == set[i])
			{
				c_start++;
				j++;
			}
		}
		else if (s1[len - 1] == set[i])
		{
			while (s1[len - 1] == set[i])
			{
				c_final++;
				len--;
			}
		}
		i++;
	}
	str = create_malloc((c_final - c_start));
	n = c_start;
	i = 0;
	while (c_start <= c_final)
	{
		str[i] = s1[n];
		n++;
		i++;
	}
	return (str);
}
