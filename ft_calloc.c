/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:52:49 by obektas           #+#    #+#             */
/*   Updated: 2022/10/20 23:04:38 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Bellekten verilen count ve size çarpımı kadar yer ayırır.
 * Bu yerin tamamı NULL ile doludur.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, count * size);
	return (result);
}
