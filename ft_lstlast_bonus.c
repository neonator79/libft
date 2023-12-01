/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:30:10 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/05 16:59:22 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
    t_list *list = NULL;

    // Создайте узлы и добавьте их в начало списка
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    // Вызовите функцию ft_lstlast для получения последнего узла
    t_list *lastNode = ft_lstlast(list);

    if (lastNode)
    {
        // Выведите содержимое последнего узла на экран
        printf("Last node content: %s\n", (char *)lastNode->content);
    }
    else
    {
        printf("The list is empty.\n");
    }

    return 0;
}*/