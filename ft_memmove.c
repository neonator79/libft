/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:00:43 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/10/07 18:52:54 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*p_src;
	unsigned char		*p_dst;

	p_src = (unsigned char *)src;
	p_dst = (unsigned char *)dst;
	i = 0;
	if (p_dst == p_src || !len)
		return (dst);
	if (p_dst < p_src)
		while (len--)
			*p_dst++ = *p_src++;
	else
		while (len--)
			p_dst[len] = p_src[len];
	return (dst);
}
