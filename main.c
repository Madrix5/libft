/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:54:52 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/18 19:48:31 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	p_memset(void)
{
	return ;
}

void	p_atoi(void)
{
	char	*c;

	c = "  -5742";
	printf("---------------- ATOI -------------------\n");
	printf("EL NUMERO A CONVERTIR: %s\n", c);
	printf("EL ORIGINAL: %d\n", atoi(c));
	printf("EL MIO: %d\n", ft_atoi(c));
	printf("*****************************************\n\n");
}

void	p_bzero(void)
{
	char	str[10] = "hola hola";
	size_t	n;

	n = 2;
	printf("---------------- BZERO ------------------\n");
	printf("EL STRING: %s\n", str);
	bzero(str, n);
	printf("EL ORGINAL: %s\n", str);
	ft_bzero(str, n);
	printf("EL MIO: %s\n", str);
	printf("*****************************************\n\n");
}

void	p_calloc(void)
{
	return ;
}

void	p_isalnum(void)
{
	return ;
}

void	p_isalpha(void)
{
	return ;
}

//================ PARTE ADICIONAL ===================//

void	p_substr(void)
{
	char const		*s = "HOLA ME LLAMO ADRIAN";
	unsigned int	start;
	size_t			len;

	start = 6;
	len = 10;
	printf("---------------- SUBSTR ------------------\n");
	printf("La string es: %s\nStart es: %d\nLen es: %zu\n\n", s, start, len);
	printf("Resultado de mi funcion: %s\n", ft_substr(s, start, len));
	printf("*******************************************\n\n");
}

void	p_strjoin(void)
{
	char const	s1[] = "Hola ";
	char const	s2[] = "papasito";

	printf("---------------- STRJOIN ------------------\n");
	printf("String1: %s - String2: %s\n", s1, s2);
	printf("Resultado: %s\n", ft_strjoin(s1, s2));
	printf("********************************************\n\n");
}

void	p_strtrim(void)
{
	char const	s1[] = "paHola paipa";
	char const	set[] = "pa";

	printf("---------------- STRTRIM ------------------\n");
	printf("S1: %s - SET: %s\n", s1, set);
	printf("Resultado: %s\n", ft_strtrim(s1, set));
	printf("********************************************\n\n");
}

void	p_split(void)
{
	return ;
}

void	p_itoa(void)
{
	return ;
}

void	p_strmapi(void)
{
	return ;
}

void	p_striteri(void)
{
	return ;
}

void	p_putchar_fd(void)
{
	return ;
}

void	p_putstr_fd(void)
{
	return ;
}

void	p_putendl_fd(void)
{
	return ;
}

void	p_putnbr_fd(void)
{
	return ;
}



int	main(void)
{
	p_atoi();
	p_bzero();
	p_substr();
	p_strjoin();
	p_strtrim();
	return (0);
}
