#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_entry;

	last_entry = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_entry = (char*)s;
		s++;
	}
	if (last_entry != NULL)
		return (last_entry);
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
