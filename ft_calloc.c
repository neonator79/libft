/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:28:31 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/10/07 18:51:27 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*total_size;

	total_size = malloc(count * size);
	if (!total_size)
	{
		return (NULL);
	}
	ft_bzero(total_size, count * size);
	return (total_size);
}
