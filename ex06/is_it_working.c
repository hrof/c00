#include <unistd.h>

unsigned long int	ft_reverse_int(int nb);
unsigned long int	ft_find_order_mag(int nb);

int	trailing_order_mag(int nb)
{
	int	extra_om;

	extra_om = 1;
	while (nb % 10 == 0)
	{
		nb /= 10;
		extra_om *= 10;
	}
	return (extra_om);
}

unsigned long int	ft_find_order_mag(int nb)
{
	unsigned long int	multiplier;

	multiplier = 1;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 10;
		if (nb > 0)
			multiplier *= 10;
	}
	return (multiplier);
}

unsigned long int	ft_reverse_int(int nb)
{
	unsigned long int	multiplier;
	unsigned long int	result;
	unsigned long int	buffer;

	result = 0;
	buffer = 0;
	while (nb % 10 == 0)
	{
		nb /= 10;
	}
	if (nb == -2147483648)
		nb ++;
	multiplier = ft_find_order_mag(nb);
	if (nb < 0)
		nb *= -1;
	buffer += nb;
	while (buffer > 0)
	{
		if (buffer % 10 > 0)
			result += (buffer % 10) * multiplier;
		multiplier /= 10;
		buffer /= 10;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	unsigned long int	extra_order_of_magnitude;
	char				digit;
	unsigned long int	buffer;
	unsigned long int	extra_neg_unit;

	extra_neg_unit = 0;
	if (nb < 0)
		write(1, "-", 1);
	if (nb == -2147483648)
		extra_neg_unit += 1000000000;
	extra_order_of_magnitude = trailing_order_mag(nb);
	buffer = ft_reverse_int(nb) + extra_neg_unit;
	while (buffer > 0)
	{
		digit = (buffer % 10) + 48;
		write(1, &digit, 1);
		buffer /= 10;
	}
	while (extra_order_of_magnitude > 9)
	{
		write(1, "0", 1);
		extra_order_of_magnitude /= 10;
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return (0);
}
