#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int i;

	i = ft_strlen((char *)str) + 1;
	while(i--)
	{
		if(*(str + i) == c)
			return((char *)(str + i));
	}
	return(0);
}
