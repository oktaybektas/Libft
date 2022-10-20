/*
 * malloc ile yer ayırıp 
 * str dizisinin kopyasını oluşturur
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t		i;

	i = 0;
	ptr = (char *) malloc (sizeof(char) * (ft_strlen(str) + 1));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(str))
	{
		*((char *) ptr + i) = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
