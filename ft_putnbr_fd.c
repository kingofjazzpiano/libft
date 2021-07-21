#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			digits[10];
	int			i;
	long long	abs_n;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	abs_n = n;
	if (abs_n < 0)
	{
		abs_n = -abs_n;
		ft_putchar_fd('-', fd);
	}
	i = 0;
	while (abs_n)
	{
		digits[i++] = abs_n % 10;
		abs_n /= 10;
	}
	i -= 1;
	while (i >= 0)
		ft_putchar_fd('0' + digits[i--], fd);
}
