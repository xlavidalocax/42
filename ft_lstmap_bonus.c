/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinxchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:52:46 by xinxchen          #+#    #+#             */
/*   Updated: 2025/10/20 11:20:41 by xinxchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*#include <stdio.h>
#include <string.h>

void    *to_uppercase(void *content)
{
        char    *str = (char *)content;
        char    *new_str = strdup(str);

        for (int i = 0; new_str[i]; i++)
        {
                if (new_str[i] >= 'a' && new_str[i] <= 'z')
                        new_str[i] -= 32;
        }
        return (new_str);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *lst = ft_lstnew(strdup("hello"));
    	ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
    	ft_lstadd_back(&lst, ft_lstnew(strdup("libft")));

	printf("Original list:\n");
	for (t_list *tmp = lst; tmp; tmp = tmp->next)
		printf("%s\n", (char *)tmp->content);

	t_list  *new_lst = ft_lstmap(lst, to_uppercase, del);
	printf("\nMapped (uppercase) list:\n");
	for (t_list *tmp = new_lst; tmp; tmp = tmp->next)
		printf("%s\n", (char *)tmp->content);
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}*/
