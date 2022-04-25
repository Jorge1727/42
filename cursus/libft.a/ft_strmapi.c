#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *tmp;

	if(!s || !f || !(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return(NULL);
	i = 0;
	while(i < (ft_strlen((char *)s)))
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return(tmp);
}
