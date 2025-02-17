/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcakir-y <tcakir-y@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:43:12 by tcakir-y          #+#    #+#             */
/*   Updated: 2024/10/18 14:14:27 by tcakir-y         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst -> content);
	free(lst);
}

//static void	print_list(t_list *lst)
//{
//	while (lst)
//	{
//		printf(" %s", (char *)lst -> content);
//		lst = lst -> next;
//	}
//	printf("  end of list");
//}

//static void	del_string(void *content)
//{
//	free(content);
//}

//int	main(void)
//{
//	t_list	*list = ft_lstnew("!! ");
//	t_list	*temp;
//	t_list	*node_to_delete;

//	ft_lstadd_back(&list, ft_lstnew("HELLO"));
//	ft_lstadd_back(&list, ft_lstnew("WORLD"));
//	ft_lstadd_back(&list, ft_lstnew("!!"));
//	node_to_delete = list->next->next;
//	temp = list;
//	while (temp->next != node_to_delete)
//		temp = temp->next;
//	temp->next = node_to_delete->next;
//	ft_lstdelone(node_to_delete, del_string);
//	printf("\nAfter deletion:\n");
//	print_list(list);
//	return (0);
//}
