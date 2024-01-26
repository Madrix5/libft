/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:54:52 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/26 19:39:24 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define KRED  "\e[1m\x1B[31mfail\033[0m"
#define KGRN  "\e[1m\x1B[32mpass\033[0m"

//===================== PARTE OBLIGATORIA ===========================//

void	p_atoi(void)
{
	char	*c;

	c = "  892";
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
	size_t	count;
	size_t	size;

	count = 5;
	size = 3;
	printf("----------------- CALLOC ------------------\n");
	printf("Original: %s\n", calloc(count, size));
	printf("Mio: %s\n", ft_calloc(count, size));
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
	printf("----------------- ISDIGIT ------------------\n");
	printf("Original: %d\n", isdigit(c));
	printf("Mio: %d\n", ft_isdigit(c));
	printf("*********************************************\n\n");
}

void	p_isprint(void)
{
	int	c;

	c = 'a';
	printf("----------------- ISPRINT ------------------\n");
	printf("Original: %d\n", isprint(c));
	printf("Mio: %d\n", ft_isprint(c));
	printf("*********************************************\n\n");
}

void	p_memchr(void)
{
	const char	*s = "HOLA";
	char		c;
	size_t		n;
	
	c = 'L';
	n = 4;
	printf("----------------- MEMCHR ------------------\n");
	printf("Original: %s\n", memchr(s, c, n));
	printf("Mio: %s\n", ft_memchr(s, c, n));
	printf("*********************************************\n\n");
}

void	p_memcmp(void)
{
	char	*s1 = "Hola1";
	char	*s2 = "Hola2";
	size_t	n;
	
	n = 4;
	printf("----------------- MEMCMP ------------------\n");
	printf("Original: %d\n", memcmp(s1, s2, n));
	printf("Mio: %d\n", ft_memcmp(s1, s2, n));
	printf("*********************************************\n\n");
}

void	p_memcpy(void)
{
	char	dest[] = "Hola";
	char	src[] = "Adios";
	size_t	n;

	n = 4;
	printf("----------------- MEMCPY ------------------\n");
	printf("Original: %s\n", memcpy(dest, src, n));
	printf("Mio: %s\n", ft_memcpy(dest, src, n));
	printf("*********************************************\n\n");
}

void	p_memmove(void)
{
	char	dest[] = 0;
	char	src[] = 0;
	size_t	n;

	n = ft_strlen(src);
	printf("----------------- MEMMOVE ------------------\n");
	printf("Original: %s\n", memmove(dest, src, n));
	printf("Mio: %s\n", ft_memmove(dest, src, n));
	printf("*********************************************\n\n");
}

void	p_memset(void)
{
	char	*b = strdup("");
	int		c;
	size_t	n;

	c = 'a';
	n = 4;
	printf("---------------- MEMSET ------------------\n");
	printf("Original: %s\n", memset(b, c, n));
	printf("Mio: %s\n", ft_memset(b, c, n));
	printf("********************************************\n\n");
}

void	p_strchr(void)
{
	char	s[] = "Hola";
	char	c;

	c = 'l';
	printf("----------------- STRCHR ------------------\n");
	printf("Original: %s\n", strchr(s, c));
	printf("Mio: %s\n", ft_strchr(s, c));
	printf("*********************************************\n\n");
}

void	p_strdup(void)
{
	char	s1[] = "Hola";

	printf("----------------- STRDUP ------------------\n");
	printf("Original: %s\n", strdup(s1));
	printf("Mio: %s\n", ft_strdup(s1));
	printf("*********************************************\n\n");
}

void	p_strlcat(void)
{
	char	dst[] = "Hola";
	char	src[] = "Adios";
	size_t	dstsize;

	dstsize = ft_strlen(dst);
	printf("----------------- STRLCAT ------------------\n");
	printf("Original: %lu\n", strlcat(dst, src, dstsize));
	printf("Mio: %lu\n", ft_strlcat(dst, src, dstsize));
	printf("*********************************************\n\n");
}

void	p_strlcpy(void)
{
	char	dst[] = "Hola";
	char	src[] = "Adios";
	size_t	dstsize;

	dstsize = ft_strlen(dst);
	printf("----------------- STRLCPY ------------------\n");
	printf("Original: %lu\n", strlcpy(dst, src, dstsize));
	printf("Mio: %lu\n", ft_strlcpy(dst, src, dstsize));
	printf("*********************************************\n\n");
}

void	p_strlen(void)
{
	char	s[] = "Hola";

	printf("----------------- STRLEN ------------------\n");
	printf("Original: %lu\n", strlen(s));
	printf("Mio: %lu\n", ft_strlen(s));
	printf("*********************************************\n\n");
}

void	p_strncmp(void)
{
	const char	*s1 = "Hola";
	const char	*s2 = "adios";
	size_t		n;

	n = 10;
	printf("---------------- STRNCMP ------------------\n");
	printf("Original: %d\n", strncmp(s1, s2, n));
	printf("Mio: %d\n", ft_strncmp(s1, s2, n));
	printf("********************************************\n\n");
}

void	p_strnstr(void)
{
	const char	haystack[] = "Hola";
	const char	needle[] = "la";
	size_t		len;
	
	len = strlen(haystack);
	printf("----------------- STRNSTR ------------------\n");
	printf("Original: %s\n", strnstr(haystack, needle, len));
	printf("Mio: %s\n", ft_strnstr(haystack, needle, len));
	printf("*********************************************\n\n");
}

void	p_strrchr(void)
{
	const char	*s = "Hola";
	int			r;

	r = 'l';
	printf("---------------- STRRCHR ------------------\n");
	printf("Original: %s\n", strrchr(s, r));
	printf("Mio: %s\n", ft_strrchr(s, r));
	printf("********************************************\n\n");
}

void	p_tolower(void)
{
	char	c;

	c = 'L';
	printf("---------------- TOLOWER ------------------\n");
	printf("Original: %c\n", tolower(c));
	printf("Mio: %c\n", ft_tolower(c));
	printf("********************************************\n\n");
}

void	p_toupper(void)
{
	char	c;

	c = 'l';
	printf("---------------- TOUPPER ------------------\n");
	printf("Original: %c\n", toupper(c));
	printf("Mio: %c\n", ft_toupper(c));
	printf("********************************************\n\n");
}
//================ PARTE ADICIONAL ===================//

void	p_substr(void)
{
	char const		*s = "HOLA";
	unsigned int	start;
	size_t			len;

	start = 0;
	len = 3;
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
	char const	s1[] = "paHola Paipa";
	char const	set[] = "pa";

	printf("---------------- STRTRIM ------------------\n");
	printf("S1: %s - SET: %s\n", s1, set);
	printf("Resultado: %s\n", ft_strtrim(s1, set));
	printf("********************************************\n\n");
}

void	p_split(void)
{
	// char	**str;
	char	*s = "    Hola    Adios   ";
	char	c;
	int		i;
	
	c = ' ';
	i = 0;
	// printf("\e[1m\x1B[32mpass\033[0m");
	printf("---------------- SPLIT ------------------\n");
	printf("String --> %s\nCaracter --> %c\n", s, c);
	ft_split(s, c);
	// while (str)
	// {
	// 	printf("%s\n", str[i]);
	// 	i++;
	// }
	printf("********************************************\n\n");
}

void	p_itoa(void)
{
	int	n;

	n = -163;
	printf("---------------- ITOA ------------------\n");
	printf("%s\n", ft_itoa(n));
	printf("********************************************\n\n");
}

//FUNCION PARA STRMAPI

char	f(unsigned int n, char c)
{
	c = c + n;
	return (c);
}

void	p_strmapi(void)
{
	char *s = "ejemplo";
	
	printf("---------------- STRMAPI ------------------\n");
	printf("String principal: %s\n", s);
	printf("String despues de pasarlo: %s\n", ft_strmapi(s, f));
	printf("********************************************\n\n");
}

//FUNCION PARA STRITERI

void	fa(unsigned int n, char *c)
{
	printf("Index: %d\n", n);
	printf("Memory ID: %p\n", &c);
	return ;
}

void	p_striteri(void)
{
	char *s = "ejemplo";
	
	printf("---------------- STRITERI ------------------\n");
	printf("String principal: %s\n", s);
	ft_striteri(s, fa);
	printf("********************************************\n\n");
}

void	p_putchar_fd(void)
{
	char	c;
	int		fd;

	c = 'l';
	fd = 1;
	printf("---------------- PUTCHAR_FD ------------------\n");
	ft_putchar_fd(c, fd);
	printf("\n");
	printf("********************************************\n\n");
}

void	p_putstr_fd(void)
{
	char	s[] = "Hola";
	int		fd;

	fd = 1;
	printf("---------------- PUTSTR_FD ------------------\n");
	ft_putstr_fd(s, fd);
	printf("\n");
	printf("********************************************\n\n");
}

void	p_putendl_fd(void)
{
	char	s[] = "Hola";
	int		fd;
	
	fd = 1;
	printf("---------------- PUTENDL_FD ------------------\n");
	ft_putendl_fd(s, fd);
	printf("\n");
	printf("********************************************\n\n");}

void	p_putnbr_fd(void)
{
	int	n;
	int	fd;

	n = -143;
	fd = 1;
	printf("---------------- PUTNBR_FD ------------------\n");
	ft_putnbr_fd(n, fd);
	printf("\n");
	printf("********************************************\n\n");
}

//================================== BONUS ===================================//

void	p_lstnew(void)
{
	return ;
}

void	p_lstadd_front(void)
{
	return ;
}

void	p_lstsize(void)
{
	return ;
}

void	p_lstlast(void)
{
	return ;
}

void	p_lstadd_back(void)
{
	return ;
}

void	p_lstdelone(void)
{
	return ;
}

void	p_lstclear(void)
{
	return ;
}

void	p_lstiter(void)
{
	return ;
}

void	p_lstmap(void)
{
	return ;
}

int	main(void)
{
	// p_atoi();
	// p_bzero();
	// p_calloc();
	// p_isalnum();
	// p_isalpha();
	// p_isascii();
	// p_isdigit();
	// p_isprint();
	// p_memchr();
	// p_memcmp();
	// p_memcpy();
	p_memmove();
	// p_memset();
	// p_strchr();
	// p_strdup();
	// p_strlcat();
	// p_strlcpy();
	// p_strlen();
	// p_strncmp();
	// p_strnstr();
	// p_strrchr();
	// p_tolower();
	// p_toupper();
	// p_substr();
	// p_strjoin();
	// p_strtrim();
	// p_split();
	// p_itoa();
	// p_strmapi();
	// p_striteri();
	// p_putchar_fd();
	// p_putstr_fd();
	// p_putendl_fd();
	// p_putnbr_fd();
	return (0);
}
