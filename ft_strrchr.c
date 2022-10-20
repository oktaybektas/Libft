/*
 * Stringin içinde find'i tersten arar,
 * Bulduğu ilk yerin adresini döndürür.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int find)
{
	int	index;

	index = ft_strlen(str);
	while (index >= 0)
	{
		if (*((char *)(str + index)) == (char)(find))
			return ((char *)(str + index));
		index--;
	}
	return (NULL);
}
