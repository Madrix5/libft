/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:24:53 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/09 20:22:55 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	unsigned int		len;
	char				*s;

	s = (char *)str;
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
