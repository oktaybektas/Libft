/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:06 by obektas           #+#    #+#             */
/*   Updated: 2022/10/20 23:51:47 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = tmp;
		}
	}
}
/* void free_print(void *content);
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "s1";
	strs[1] = "s2";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew(strs[0]);
	list = ft_lstnew(strs[1]);
	printf("firs adresi : %#p\n", first);
	printf("list adresi : %#p\n", list);
	ft_lstadd_back(&list,first);
	ft_lstclear(&list, free_print);
	printf("list adresi : %#p\n", list);
}

void free_print(void *content)
{
	content = NULL;
	printf("listeden silinen eleman değilşkeni kontrol %s\n", (char *)content);
}
*/