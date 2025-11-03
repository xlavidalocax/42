/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:18:12 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 12:13:18 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>
#include <string.h>

void	del(void *content)
{
	free(content);
}
int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("First"));
	t_list *node2 = ft_lstnew(strdup("Second"));
	t_list *node3 = ft_lstnew(strdup("Third"));

	node1->next = node2;
	node2->next = node3;
	printf("Before deleting node2:\n");
   	printf("node1: %s\n", (char *)node1->content);
   	printf("node2: %s\n", (char *)node2->content);
        printf("node3: %s\n", (char *)node3->content);
	ft_lstdelone(node2, del);
	printf("\nAfter deleting node2:\n");
   	printf("node1 next: %p\n", (void *)node1->next);
   	printf("node3: %s\n", (char *)node3->content);
	ft_lstdelone(node1, del);
	ft_lstdelone(node3, del);
	return (0);
}*/
