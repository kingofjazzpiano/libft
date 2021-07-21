#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char*)dst = *(unsigned char*)src;
		dst++;
		if (*(unsigned char*)src == (unsigned char)c)
			return (dst);
		src++;
	}
	return (NULL);
}
