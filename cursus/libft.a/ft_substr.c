#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *modified_s;

	if(!s || !(modified_s = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && s[start + i] && i < len)
	{
		modified_s[i] = s[start + i];
		i++;
	}
	modified_s[i] = '\0';
	return (modified_s);
}

