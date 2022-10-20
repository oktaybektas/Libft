/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:07:00 by obektas           #+#    #+#             */
/*   Updated: 2022/10/20 23:50:14 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
/* t_list	*ft_lstnew(void *content);
#include <stdio.h>
int		main(void)
{
	char *strs[2];
	strs[0] = "s1";
	strs[1] = "s2";
	t_list	*first;
	t_list	*list;
	
	first = ft_lstnew((void *)strs[0]);//diğer gönderim first = ft_lstnew(strs[0]);
	list = ft_lstnew((void *)strs[1]);
	printf("firs adresi %#p\n", first);
	printf("list adresi %#p\n", list);
	ft_lstadd_back(&list, first);
	printf("***ft_lstadd_back fonksiyonu kullanıldı\n");
	printf("list adresi %#p\n", list);
	printf("list->next(yeni firest oldu) adresi %#p\n", list->next);
}*/
