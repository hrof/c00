#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int n);

void	ft_int_to_char(int n)
{
	ft_putchar((n % 10) + '0');
	n /= 10;
	ft_putchar((n % 10) + '0');
	n /= 10;
	ft_putchar((n % 10) + '0');
}

int main(void)
{
	ft_int_to_char(123);
}
