#include "libft.h"

char	*ft_itoa(int n)
{
	int				sign;
	unsigned int	abs_n;
	int				length;
	char			*str;

	sign = (n < 0) ? 1 : 0;
	abs_n = (n > 0) ? n : -n;
	length = (n == 0) || sign ? 1 : 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	str = (char*)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	while (length-- > sign)
	{
		str[length] = abs_n % 10 + '0';
		abs_n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
