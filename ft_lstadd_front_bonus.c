/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:37:07 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/05 15:34:14 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main() {
    t_list *list = NULL; // Inicializando una lista vacía

    // Crea varios elementos y agrégalos al final de la lista.
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Agregar elementos al final de la lista
    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node3);

    // Crea un nuevo elemento y agrégalo al principio de la lista.
    t_list *new_node = ft_lstnew("New Node");
    ft_lstadd_front(&list, new_node);

    // Recorriendo la lista y mostrando su contenido
    t_list *current = list;
    while (current) {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}*/