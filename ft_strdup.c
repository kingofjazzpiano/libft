#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	i;

	new_str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
