/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:32:18 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/10/07 18:52:26 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*p;

	i = 0;
	uc = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == uc)
		{
			return (p + i);
		}
		i++;
	}
	return (NULL);
}
