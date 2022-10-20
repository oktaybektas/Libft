#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/* void ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
int		ft_strlen(const char *str);
#include <stdio.h>
int	main(void)
{
	int	f;

	f = open("s1.txt", 1);
	if (f == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.");
	char s[]= "asd";
	ft_putstr_fd(s, f);
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
} */