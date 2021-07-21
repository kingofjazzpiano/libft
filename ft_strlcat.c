#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (dst[i])
		i++;
	if (dstsize < i)
	{
		while (src[k])
			k++;
		return (dstsize + k);
	}
	while (dstsize > 0 && i < dstsize - 1 && src[k])
		dst[i++] = src[k++];
	dst[i] = '\0';
	while (src[k++])
		i++;
	return (i);
}
