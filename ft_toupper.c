/*
 * c değişkeni eğer küçükse harfse büyük yapar.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
