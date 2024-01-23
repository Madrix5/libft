/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:31:18 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/23 11:19:40 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			word++;
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	int		words;

	str = (char *)s;
	words = ft_count_w(str, c);
	printf("%d\n", words);
	return (str);
}
