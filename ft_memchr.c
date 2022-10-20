/*
 * Stringin ilk n kadar karakter içinde c'yi arar.
 * Eğer c'yi bulursa, ilk bulduğu adresi döndürür.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
