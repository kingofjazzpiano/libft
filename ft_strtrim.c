#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size_of_s1;
	char	*new_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_of_s1 = ft_strlen(s1);
	while (size_of_s1 && ft_strchr(set, s1[size_of_s1 - 1]))
		size_of_s1--;
	new_str = ft_substr((char *)s1, 0, size_of_s1);
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
