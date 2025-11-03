/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:38:37 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 12:35:31 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*#include <stdio.h>
#include <string.h>

void del(void *content)
{
    free(content);
}

int	main(void)
{
	t_list *head = ft_lstnew(strdup("First"));
        ft_lstadd_back(&head, ft_lstnew(strdup("Second")));
        ft_lstadd_back(&head, ft_lstnew(strdup("Third")));
	
	printf("Before ft_lstclear:\n");
        t_list *tmp = head;
        while (tmp)
        {
        	printf("%s\n", (char *)tmp->content);
        	tmp = tmp->next;
        }
    	ft_lstclear(&head, del);
    	if (!head)
        printf("After ft_lstclear: head is NULL\n");
   	return (0);
}*/
