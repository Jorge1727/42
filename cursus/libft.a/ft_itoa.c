#include "libft.h"

char *ft_strrev(char *str)
{
	int i;
	int size;
	char tmp;

	size = ft_strlen(str);
	i = 0;
	while(i < (size / 2))
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return(str);
}

int ft_intlen(int n)
{
	int i;
	long long tmp;

	tmp = n;
	i = 1;
	if(tmp < 0)
	{
		tmp = tmp / 10;
		i++;
	}
	return(i);
}

char *ft_itoa(int n)
{
	int i;
	int is_negative;
	unsigned int positive_n;
	char *value;

	if(n == 0)
		return(ft_strdup("0"));
	if(!(value = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1))))
		return(NULL);
	ft_memset(value, '\0', (ft_intlen(n) + 1));
	is_negative = n < 0 ? 1 : 0;
	positive_n = n < 0 ? -n : n;
	i = 0;
	while(positive_n != 0)
	{
		value[i++] = (positive_n % 10) + '0';
		positive_n = positive_n / 10;
	}
	if(is_negative)
		value[i++] = '-';
	return(ft_strrev(value));
}
