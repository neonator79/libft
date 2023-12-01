/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:29:01 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/05 16:33:10 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main()
{
    t_list *list = NULL;

	// Crea varios elementos y agrégalos al final de la lista.
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *node4 = ft_lstnew("Node 4");
    t_list *node5 = ft_lstnew("Node 5");
    t_list *node6 = ft_lstnew("Node 6");
    // Agregar elementos al final de la lista
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node4);
    ft_lstadd_front(&list, node5);
    ft_lstadd_front(&list, node6);

    int size = ft_lstsize(list);
    printf("numeros de nodes en list: %d\n", size);
    return 0;
}*/
