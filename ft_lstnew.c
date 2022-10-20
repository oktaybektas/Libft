/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:34:54 by obektas           #+#    #+#             */
/*   Updated: 2022/10/20 22:35:09 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/* #include <stdio.h>
int		main(void)
{
	char	str[] = "selam nbr";
	t_list	*elem, *elem2;
	elem = ft_lstnew((void *)str);
	printf("\n(void *) li ekleme %s\n", elem->content);
	elem2 = ft_lstnew(str);//çalışmayabilir kontrol etmedim
	printf("\nekleme olmadan tür dönüşümlü%s\n", (char *)elem->content);
} */