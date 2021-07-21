#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (*needle == '\0')
		return ((char*)haystack);
	j = 0;
	while (haystack[j] && j < len)
	{
		if (haystack[j] == needle[0])
		{
			i = 1;
			k = j + 1;
			while (haystack[k] == needle[i] && needle[i] && k < len)
			{
				i++;
				k++;
			}
			if (needle[i] == '\0')
				return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
