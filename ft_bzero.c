/*
 * Dizinin ilk n karakterine NULL atar.
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	if (!str)
		return ;
	i = 0;
	while (i < n)
	{
		*((char *)(str + i)) = 0;
		i++;
	}
}
