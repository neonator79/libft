/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:20:55 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/01 12:39:28 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * (s_len +1));
	if (!str)
		return (NULL);
	if (str)
	{
		while (s[i])
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
/*
char f(unsigned int index, char c)
{
	if (ft_isascii(index))
	{	
		if (ft_isdigit(c))
		{
			return (c + 2);
		}
		else if (ft_isalpha(c))
		{
			return ('a');
		}
	
	}
	return (c);
}

int main()
{
	char *str = "g44dfdf55dssd5g4h44ff";
	char *str2;
	str2 = ft_strmapi(str, f);
	int i = 0;
	while (str2[i])
	{
		printf("%c\n", str2[i]);
		i++;
	}
	free(str2);
	return (0);
}
*/