/*
 * c değişkeninin ascii olup olmadığını
 * kontrol eder.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
