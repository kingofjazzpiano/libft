#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	stop;
	size_t	length_of_s;
	char	*substring;

	if (!s)
		return (NULL);
	length_of_s = ft_strlen(s);
	if (start >= length_of_s)
		return (ft_strdup(""));
	if (start + len > length_of_s)
		len = length_of_s - start;
	substring = (char*)malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	i = 0;
	j = start;
	stop = start + len;
	while (j < stop)
		substring[i++] = s[j++];
	substring[i] = '\0';
	return (substring);
}
