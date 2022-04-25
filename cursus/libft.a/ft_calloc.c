#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *buffer;

	if(!(buffer = (void *)malloc(size * nmemb)))
		return(NULL);
	ft_bzero(buffer, size * nmemb);
	return(buffer);
}
