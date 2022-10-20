/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obektas <obektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:35:36 by obektas           #+#    #+#             */
/*   Updated: 2022/10/20 23:47:05 by obektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Src'yi dest'e ilk len karakter kadar kopyalar.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char de[10] = "oktay";
	char se[10] = "bektas";
	size_t i =2;
	printf("%s", ft_memcpy(de, se, i));
}*/
