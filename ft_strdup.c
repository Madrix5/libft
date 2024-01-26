/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:35:25 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/16 16:56:06 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1len;
	int		i;
	char	*nstr;

	i = 0;
	s1len = ft_strlen(s1);
	nstr = malloc((sizeof (char) * (s1len + 1)));
	if (!nstr)
		return (0);
	while (i < s1len + 1)
	{
		nstr[i] = s1[i];
		i++;
	}
	nstr[i] = '\0';
	return (str);
}

//Mirar si al final se pone el nulo.
//Mirar de substituir el while por ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
