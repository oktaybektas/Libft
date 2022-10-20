/*
 * String ifadeyi integera çevirir
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	short int		sign;
	unsigned long	result;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		++str;
	if (*str == '-' && ++str)
		sign = -1;
	else if (*str == '+')
		++str;
	while ('0' <= *str && *str <= '9')
		result = result * 10 + ((unsigned long)*str++ - 48);
	return ((int)result * sign);
}
