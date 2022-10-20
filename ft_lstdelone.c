/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:12 by obektas           #+#    #+#             */
/*   Updated: 2022/10/21 00:12:48 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}/*
void free_print(void *content);
t_list	*ft_lstnew(void *content);
#include <stdio.h>
int		main(void)
{
	char strs[] = "s";
	t_list	*first;
	
	first = ft_lstnew(strs);
	printf("firs adresi : %p\n", first);
	printf("firs verisi : %s\n", first->content);
	ft_lstdelone(first, free_print);
	printf("firs verisi : %s\n", first->content);
}
void free_print(void *content)
{
	*(char *)content = 0;
	//printf("liste atanan eleman eleman %s\n", (char *)content);
}*/
