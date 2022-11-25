#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_int_to_char(int n);

void	ft_int_to_char(int n)
{
	int	reverse;
	int	multiplier;
	
	reverse = 0;
	multiplier = 1;

	reverse += (n % 10) * multiplier;	
	multiplier *= 10;
	n /= 10;
	reverse += (n % 10) * multiplier;
	multiplier *= 10;
	n /= 10;
	reverse += (n % 10) * multiplier;
	n /= 10;

	ft_putchar((reverse % 10) + '0');
	reverse /= 10;
	ft_putchar((reverse % 10) + '0');
	reverse /= 10;
	ft_putchar((reverse % 10) + '0');
}

int main(void)
{
	ft_int_to_char(123);
}
