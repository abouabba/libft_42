/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouabba <abouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:18:18 by abouabba          #+#    #+#             */
/*   Updated: 2024/11/09 17:17:42 by abouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int main()
// {
// 	t_list *add;

// 	add = ft_lstnew("57574");
// 	if (add)
// 		puts(add->content);
// 	else
// 		printf("ana ghadi ldar \n");
// 	free (add);
// 	return 0;
// }