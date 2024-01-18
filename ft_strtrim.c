/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:31:15 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/18 18:46:26 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	if (s1[0] == '\0' || set[0] == '\0')
		return (NULL);
	while (*s1 && ft_strchr(set, (int)&s1[i]))
		s1++;
	while (len && ft_strchr(set, (int)&s1[len]))
		len--;
	str = ft_substr(s1, i, len + 1);
	return (str);
}
