#include "libft.h"

char *ft_strdup(const char *str)
{
	int idx;
	char *dest;

	if(!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	idx = 0;
	while(str[idx])
	{
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

