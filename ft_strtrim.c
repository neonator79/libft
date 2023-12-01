/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:24:57 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/12 15:49:26 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	const char	*start_s1;
	const char	*end_s1;
	size_t		len;

	start_s1 = s1;
	end_s1 = s1 + ft_strlen(s1) - 1;
	i = 0;
	if (!s1 || !set || set == NULL)
		return (NULL);
	while (*start_s1 && ft_strchr(set, *start_s1))
		start_s1++;
	while (end_s1 >= s1 && ft_strchr(set, *end_s1))
		end_s1--;
	len = (size_t)(end_s1 - start_s1) + 1;
	return (ft_substr(start_s1, 0, len));
}
