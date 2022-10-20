/*
 * Bellekten verilen size ve nmemb çarpımı kadar yer ayırır.
 * Bu yerin tamamı NULL ile doludur.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
