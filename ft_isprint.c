/*
* c değişkeninin yazdırılabilen bir karakter olup
* olmadığını kontrol eder.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
