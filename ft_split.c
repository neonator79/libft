/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:18:36 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/12 15:47:31 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//считаем количество слов
static size_t	ft_count(char const *s, char c)
{
	size_t	strings;

	strings = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			strings++;
		while (*s && *s != c)
			s++;
	}
	return (strings);
}

//считаем длину строки
static size_t	stringslen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

//очищаем память после создания массива строк
static void	sclean(char **arr, size_t index)
{
	while (index)
		free(arr[--index]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	strings_count;
	size_t	strings_index;

	strings_count = ft_count(s, c);
	strings = malloc(sizeof(char *) * (strings_count + 1));
	if (strings != NULL)
	{
		strings_index = 0;
		while (strings_index < strings_count)
		{
			while (*s == c)
				s++;
			strings[strings_index] = ft_substr(s, 0, stringslen(s, c));
			if (strings[strings_index] == NULL)
			{
				sclean(strings, strings_index);
				return (NULL);
			}
			s += stringslen(s, c);
			strings_index++;
		}
		strings[strings_count] = NULL;
	}
	return (strings);
}
