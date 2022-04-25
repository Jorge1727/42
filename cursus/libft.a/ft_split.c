#include "libft.h"

size_t get_cnt(char const *s, char c)
{
	size_t cnt;

	cnt = 0;
	while(*s != '\0')
	{
		if(*s == c)
			s++;
		else
		{
			cnt++;
			while(*s != '\0' && *s != c)
				s++;
		}
	}
	return(cnt);
}

char **free_machine(char **s, size_t i)
{
	while(s[i] != NULL)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return(NULL);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t len;
	size_t word_cnt;
	char **words;

	if(!s || !(words = (char **)malloc(sizeof(char *) * (get_cnt(s, c) + 1))))
		return(NULL);
	word_cnt = get_cnt(s, c);
	i = 0;
	while(*s)
	{
		if(*s == c)
			s++;
		else
		{
			len = 0;
			while(*(s + len) && *(s + len) != c)
				len++;
			if(i < word_cnt && !(words[i++] = ft_substr(s, 0, len)))
				return(free_machine(words, i));
			s += len;
		}
	}
	words[i] = 0;
	return(words);
}

