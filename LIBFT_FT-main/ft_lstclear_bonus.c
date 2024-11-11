/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:34:56 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/11 17:43:33 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*next_node;
	
	head = *lst;
	if (!lst || !del)
		return ;
	while (head)
	{
		next_node = head->next;
		del(head->content);
		free (head);
		head = next_node;
	}
	*lst = NULL;
}
// void del(void *content)
// {
// 	free(content);
// }
// int main()
// {
//     t_list *node = malloc(sizeof(t_list));
// 	t_list *head  = malloc(sizeof(t_list));


// 	head->content = ft_strdup("hhhhhh");
// 	head->next = node;
//     node->content = ft_strdup("hhhh");
//     node->next = NULL;
// 	node = NULL;

// 	void (*gg)(void*) =del;
//     ft_lstclear(&head, gg);
// 	if(node == NULL)
// 		printf("------------->\n");// hna ki3tini output node "hhhh"

//     return (0);
// }