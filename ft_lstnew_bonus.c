/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:19:43 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/18 11:48:30 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>
int	main(void)
{
	char *text = "Hello world";
	t_list	*node1 = ft_lstnew(text);
	printf("Test1: \n");
	if (node1)
	{
		printf("Content: %s\n", (char *)node1->content);
		printf("Next: %p\n", (void *)node1->next);
	}
	else
		printf("Node creation failed!\n");

	int	*num = malloc(sizeof(int));
	*num = 42;
	t_list *node2 = ft_lstnew(num);
	printf("\nTest: 2:\n");
	if (node2)
	{
	        printf("Content address: %p\n", node2->content);
		printf("Content value: %d\n", *(int *)node2->content);
                printf("Next: %p\n", (void *)node2->next);
        }
        else
                printf("Node creation failed!\n");
	free(num);
	free(node1);
	free(node2);
	return (0);
}*/
