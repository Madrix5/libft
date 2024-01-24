/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrijime <adrijime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:31:18 by adrijime          #+#    #+#             */
/*   Updated: 2024/01/24 20:34:22 by adrijime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	**free_me(char **str)
// {
// 	int	i;
	
// 	if (str)
// 	{
// 		i = 0;
// 		while (str[i])
// 		{
// 			free(str[i]);
// 			i++;
// 		}
// 		free(str);
// 	}
// 	return (NULL);
// }

// static int	ft_count_w(const char *s, char c)
// {
// 	int	i;
// 	int	word;

// 	i = 0;
// 	word = 0;
// 	if (s[0] != c)
// 	{
// 		word++;
// 		i++;
// 	}
// 	while (s[i])
// 	{
// 		if (s[i] != c && s[i - 1] == c)
// 			word++;
// 		i++;
// 	}
// 	return (word);
// }

// static char	**fill_malloc(const char *s, char **str, char c)
// {
// 	int		i;
// 	int		j;
// 	int		start;

// //	if (!*s)
// //		return (NULL);
// 	i = 0;
// 	start = -1;
// 	j = 0;
// 	while(j < ft_count_w(s, c))
// 	{
// 		if (s[i] != c && start == -1)
// 			start = i;
// 		while (s[i] && s[i] != c)
// 			i++;
// 		if (start != -1)
// 		{
// 			str[j] = ft_substr(s, start, i - start);
// 			if (!str[j] && j > 0)
// 				return (free_me(str));
// 			j++;
// 			start = -1;
// 		}
// 		i++;
// 	}
// 	//str[j][0] = '\0';
// 	return (str);
// }

void	prueba(char **str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		printf("Valor en s[%d] -- %s\n", c, str[c]);
		c++;
	}
}

// char	**ft_split(char const *s, char c)
// {
// 	char	**str;
	
// 	// if (!*s)
// 	// 	return (NULL);
// 	if (ft_count_w(s, c) == 0)
// 	{
// 		str = malloc(sizeof(char *));
// 		if (!str)
// 			return (NULL);
// 		str[0] = ft_strdup("");
// 		return (str);
// 	}
// 	str = malloc(sizeof(char *) * ft_count_w(s, c) + 1);
// 	if (!str)
// 		return (NULL);
// 	str = fill_malloc(s, str, c);
// 	if (!str)
// 		return(NULL);
// 	// prueba(str);
// 	return (str);
// }


// #include "libft.h"

static void	free_words(char **rslt)
{
	int	i;

	i = 0;
	while (rslt[i])
	{
		free(rslt[i]);
		i++;
	}
	free(rslt);
}

static char	*strndup2(const char *s, size_t n)
{
	char	*rslt;
	char	*dest;

	rslt = malloc(n + 1);
	if (!rslt)
		return (NULL);
	dest = rslt;
	while (n--)
		*dest++ = *s++;
	*dest = '\0';
	return (rslt);
}

static int	split_words(char const *s, char c, char **rslt)
{
	int	len;
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			rslt[i] = strndup2(s - len, len);
			if (!rslt[i])
				return (-1);
			i++;
		}
		else
			s++;
	}
	return (i);
}

static int	count_words(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		wordn;
	char	**rslt;
	int		i;

	wordn = count_words(s, c);
	rslt = malloc(sizeof(char *) * (wordn + 1));
	if (!rslt)
		return (NULL);
	i = split_words(s, c, rslt);
	if (i == -1)
	{
		free_words(rslt);
		return (NULL);
	}
	rslt[i] = NULL;
	prueba(rslt);
	return (rslt);
}