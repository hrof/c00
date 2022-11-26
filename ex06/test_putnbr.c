#include <unistd.h>

int	order_mag(int nb);
int	ft_reverse_int(int nb);

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

int	ft_find_order_mag(int nb)
{
	int	multiplier;

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

int	ft_reverse_int(int nb)
{
	int	multiplier;
	int	buffer;

	buffer = 0;
	while (nb % 10 == 0)
	{
		nb /= 10;
	}
	multiplier = ft_find_order_mag(nb);
	while (nb > 0)
	{
		if (nb % 10 > 0)
			buffer += (nb % 10) * multiplier;
		multiplier /= 10;
		nb /= 10;
	}
	return (buffer);
}

void	ft_putnbr(int nb)
{
	int		extra_order_of_magnitude;
	char	digit;
	int		n_sign;

	n_sign = 0;
	if (nb < 0)
	{
		nb *= -1;
		n_sign = 1;
	}
	extra_order_of_magnitude = trailing_order_mag(nb);
	nb = ft_reverse_int(nb);
	if (n_sign)
		write(1, "-", 1);
	while (nb > 0)
	{
		digit = (nb % 10) + 48;
		write(1, &digit, 1);
		nb /= 10;
	}
	while (extra_order_of_magnitude > 9)
	{
		write(1, "0", 1);
		extra_order_of_magnitude /= 10;
	}
}

int	main(void)
{
	ft_putnbr(2147483639);
	write (1, "\n", 1);
	return (0);
}
