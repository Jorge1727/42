#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int i_join;
	char *join;

	if(!s1 || !s2 || !(join = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1))))
		return (NULL);
	i = 0;
	i_join = 0;
	while(s1[i])
		join[i_join++] = s1[i++];
	i = 0;
	while(s2[i])
		join[i_join++] = s2[i++];
	join[i_join] = '\0';
	return(join);
}

