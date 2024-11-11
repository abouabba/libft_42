/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:10:49 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/10 18:31:08 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}
// int main()
// {
// 	t_list *head = malloc(sizeof(t_list));
// 	t_list *second = malloc(sizeof(t_list));
// 	t_list *third = malloc(sizeof(t_list));
// 	t_list *new = malloc(sizeof(t_list));

// 	head->content = "ana";
// 	head->next = second;

// 	second->content = "ghadi";
// 	second->next = third;

// 	third->content = "ldar";
// 	third->next = NULL;

// 	new->content = "chwiya";
// 	new->next = NULL;

// 	t_list	*temp = head;
// 	ft_lstadd_back(&head, new);
// 	while (temp != NULL)
// 	{
// 		printf ("---->%s", temp->content);
// 		temp = temp->next;
// 	}
// 	printf("------>NULL\n");

// 	free (head);
// 	free (second);
// 	free (third);
// 	free (new);

// 	return (0);
// }