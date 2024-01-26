/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:54:08 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/26 20:54:40 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*add;
	
	add = (t_list *)malloc(sizeof(t_list));
	if (!add)
		return (NULL);
	add->content = content;
	add->next = NULL;
	return (add);
}

/*
int	main(void)
{
	t_list	newdata = ft_lstnew("Hola, soy Adrian");

	printf("Contenido nuevo: %s\n", (char *)newdata->content);
	free(newdata);
	return (0);
}
*/