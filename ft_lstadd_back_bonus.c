/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysitkevi <ysitkevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 17:05:59 by ysitkevi          #+#    #+#             */
/*   Updated: 2023/11/05 18:02:58 by ysitkevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (last == NULL)
	{
		*lst = new;
	}
	else
	{
		last->next = new;
	}
}
/*int main()
{
    t_list *list = NULL; // Создаем пустой связанный список

    // Добавляем несколько узлов в начало списка
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Добавляем узлы в начало списка
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Печатаем исходный список
    printf("Исходный список:\n");
    t_list *current = list;
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Используем ft_lstadd_back для добавления нового узла в конец списка
    t_list *new_node = ft_lstnew("New Node");
    ft_lstadd_back(&list, new_node);

    // Печатаем обновленный список
    printf("\nОбновленный список:\n");
    current = list; // Обновляем указатель на начало списка
    while (current)
    {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}*/