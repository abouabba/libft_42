/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:46:56 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/10 13:07:18 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int main()
// {
// 	t_list	*head = malloc(sizeof(t_list));
// 	t_list	*second = malloc(sizeof(t_list));
// 	t_list	*third = malloc(sizeof(t_list));

// 	head->content = "ana";
// 	head->next = second;
// 	second->content = "ghadi";
// 	second->next = third;

// 	third->content = "ldar";
// 	third->next = NULL;
// 	t_list *lst = ft_lstlast(head);
// 	if (head != NULL)
// 		printf("----->%s\n", lst->content);

// 	free (head);
// 	free (second);
// 	free (third);

// 	return (0);
// }