/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:38:35 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/26 15:56:14 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int	main(void)
{
	ft_putnbr(5678);
	return (0);
}
*/
