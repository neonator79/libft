/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:34:24 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/12 17:59:18 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cursor;
	t_list	*cursor_before;

	cursor_before = *lst;
	while (cursor_before != NULL)
	{
		cursor = cursor_before;
		cursor_before = cursor_before->next;
		ft_lstdelone(cursor, del);
	}
	*lst = NULL;
}
