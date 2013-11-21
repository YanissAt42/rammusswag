#include "../lib/libft.h"

char *ft_strstr(const char *s1, const char *s2)
{

	char c;
	char sc;
	size_t len;

	c = *s2++;
	if (!c)
		return (char *) s1;
	len = ft_strlen(s2);
	while (ft_strncmp(s1, s2, len))
	{
		sc = 0;
		while (sc != c)
		{
			sc = *s1++;
			if (!sc)
				return (char *)0;
		}
	}

	return (char *) (s1 - 1);
}
