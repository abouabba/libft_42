/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:20:21 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/10 21:28:41 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {

// 	t_list *head  = malloc(sizeof(t_list));
// 	t_list *second = malloc(sizeof(t_list));
// 	t_list *third = malloc(sizeof(t_list));
	

// 	head->content = "ana";
// 	head->next = second;

// 	second->content = "ghadi";
// 	second->next = third;

// 	third->content = "ldar";
// 	third->next = NULL;

// 	t_list *new = malloc(sizeof(t_list));
// 	new->content = "machi";
// 	new->next = NULL;

// 	ft_lstadd_front(&head, new);

// while (new != NULL)
// {
// 	printf("%s--->", new->content);
// 	new = new->next;
// }
// 	free(head);
// 	free(second);
// 	free(third);

// 	return 0;
// }