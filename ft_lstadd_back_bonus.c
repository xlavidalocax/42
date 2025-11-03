/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:22:57 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/20 10:36:20 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
	{
		current = current->next;
	}
	current ->next = new;
}
/*#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;
	t_list *n1 = ft_lstnew("Hello");
	t_list *n2 = ft_lstnew("World");
	t_list *n3 = ft_lstnew("42");

	ft_lstadd_back(&head, n1);
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);

	t_list *tmp = head;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	return (0);
}*/
