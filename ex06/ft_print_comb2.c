/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:21:28 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/25 21:22:31 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_reverse_int(int n);
void	ft_putnbr(int nb);
void	ft_print_two_int(int f, int s);
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_reverse_int(int n)
{
	int	multiplier;
	int	buffer;

	buffer = n;
	multiplier = 1;
	while (buffer > 0)
	{
		buffer /= 10;
		if (buffer > 0)
		{
			multiplier *= 10;
		}
	}
	while (n > 0)
	{
		buffer += (n % 10) * multiplier;
		multiplier /= 10;
		n /= 10;
	}
	return (buffer);
}

void	ft_putnbr(int nb)
{
	char	digit;

	nb = ft_reverse_int(nb);
	while (nb > 0)
	{
		digit = (nb % 10) + 48;
		write(1, &digit, 1);
		nb /= 10;
	}
}

void	ft_print_two_int(int f, int s)
{
	char	c;

	c = '0';
	if (f < 10)
		ft_putchar(c);
	ft_putnbr(f);
	if (s < 10)
		ft_putchar(c);
	ft_putnbr(s);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_print_two_int(x, y);
			if (x < 98 && y < 99)
				write(1, ", ", 2);
			y ++;
		}
		x ++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
