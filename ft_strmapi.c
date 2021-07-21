#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_string;
	size_t	i;
	size_t	length;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	new_string = (char*)malloc(sizeof(char) * (length + 1));
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_string[i] = (*f)(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
