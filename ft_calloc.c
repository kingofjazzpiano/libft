#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	number_of_bytes;

	number_of_bytes = count * size;
	ptr = malloc(number_of_bytes);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < number_of_bytes)
		ptr[i++] = 0;
	return (ptr);
}
