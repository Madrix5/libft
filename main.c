/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:54:52 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/19 10:16:14 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//===================== PARTE OBLIGATORIA ===========================//

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
	printf("----------------- CALLOC ------------------\n");
	printf("*********************************************\n\n");
}

void	p_isalnum(void)
{
	int	c;

	c = 'a';
	printf("----------------- ISALNUM ------------------\n");
	printf("Original: %d\n", isalnum(c));
	printf("Mio: %d\n", ft_isalnum(c));
	printf("*********************************************\n\n");
}

void	p_isalpha(void)
{
	int	c;

	c = 'a';
	printf("----------------- ISALPHA ------------------\n");
	printf("Original: %d\n", isalpha(c));
	printf("Mio: %d\n", ft_isalpha(c));
	printf("*********************************************\n\n");
}

void	p_isascii(void)
{
	int	c;

	c = 'a';
	printf("----------------- ISASCII ------------------\n");
	printf("Original: %d\n", isascii(c));
	printf("Mio: %d\n", ft_isascii(c));
	printf("*********************************************\n\n");
}

void	p_isdigit(void)
{
	int_least64_t	c;

	c = 'a';
	printf("----------------- ISASCII ------------------\n");
	printf("Original: %d\n", isdigit(c));
	printf("Mio: %d\n", ft_isdigit(c));
	printf("*********************************************\n\n");
}

void	p_isprint(void)
{
	int	c;

	c = 'a';
	printf("----------------- ISASCII ------------------\n");
	printf("Original: %d\n", isprint(c));
	printf("Mio: %d\n", ft_isprint(c));
	printf("*********************************************\n\n");
}

void	p_memset(void)
{
	char	*b = "";
	int		c;
	size_t	n;

	c = 'a';
	n = 4;
	printf("---------------- MEMSET ------------------\n");
	printf("Original: %s\n", memset(b, c, n));
	printf("Mio: %s\n", ft_memset(b, c, n));
	printf("********************************************\n\n");
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
	printf("---------------- SPLIT ------------------\n");
	printf("********************************************\n\n");
}

void	p_itoa(void)
{
	printf("---------------- ITOA ------------------\n");
	printf("********************************************\n\n");
}

void	p_strmapi(void)
{
	printf("---------------- STRMAPI ------------------\n");
	printf("********************************************\n\n");
}

void	p_striteri(void)
{
	printf("---------------- STRITERI ------------------\n");
	printf("********************************************\n\n");
}

void	p_putchar_fd(void)
{
	printf("---------------- PUTCHAR_FD ------------------\n");
	printf("********************************************\n\n");
}

void	p_putstr_fd(void)
{
	printf("---------------- PUTSTR_FD ------------------\n");
	printf("********************************************\n\n");
}

void	p_putendl_fd(void)
{
	printf("---------------- PUTENDL_FD ------------------\n");
	printf("********************************************\n\n");}

void	p_putnbr_fd(void)
{
	printf("---------------- PUTNBR_FD ------------------\n");
	printf("********************************************\n\n");}



int	main(void)
{
	p_atoi();
	p_bzero();
	p_isalnum();
	p_isalpha();
	p_isascii();
	p_isdigit();
	p_isprint();
	p_memset();
	p_substr();
	p_strjoin();
	p_strtrim();
	return (0);
}
