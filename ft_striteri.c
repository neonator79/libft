/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:01:10 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/13 20:57:32 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void f (unsigned int index, char *c)
{
	//index = 0;
	if (index % 2 != 0)
	{
		*c = ft_toupper(*c);
	}
}

int main()
{
	char s[] = "madrid";
	ft_striteri(s, f);
	printf("%s", s);
	return (0);
}
*/
