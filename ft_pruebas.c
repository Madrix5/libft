/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:39:27 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/09 15:50:09 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	pruebas(void)
{
	char	src[] = "Hola";
	char	dest[6] = "Adios";

	printf("src = %s\n dest = %s\n", src, dest);
	ft_memmove(dest, src, 2);
	printf("src = %s\n dest = %s\n", src, dest);
}

int	main(void)
{
	printf("-----------------------------------------------\n");
	pruebas();
	printf("-----------------------------------------------\n");
}
