/*
 * S dizisi içinde c ye eşit olmadığında
 * main *a[] stringine ekler
 * ft_split("marhaba.selamlar.mmm", '.')
*/

#include "libft.h"

static int	ft_wcounter(char const *s, char c)
{
	int	total;

	total = 0;
	while (*s == c && *s)
		s++;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			total++;
		while (*s && *s != c)
			s++;
	}
	return (total + 1);
}

static int	ft_sizer(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*ft_new(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(ft_sizer(s, c) + 1 * sizeof(char));
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**parr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	parr = (char **)malloc(ft_wcounter(s, c) * sizeof(char *));
	if (!parr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			parr[j++] = ft_new(s + i, c);
			i += ft_sizer(s + i, c);
		}
	}
	parr[j] = NULL;
	return (parr);
}
/* int	main(void)
{
	char	**a;
	char	*dizi;

	dizi = "marhaba.selamlar.mmm";
	a = ft_split(dizi, '.');
	// a = ft_split("marhaba.selamlar.mmm", '.');
	printf("%s\n", a[0]);
	printf("%s\n", a[1]);
	printf("%s", a[2]);
} */