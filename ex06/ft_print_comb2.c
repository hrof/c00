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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_mul_char(char d1, char u1, char d2, char u2);

void	ft_print_mul_char(char d1, char u1, char d2, char u2)
{
	ft_putchar(d1);
	ft_putchar(u1);
	wite(1, ' ', 1);
	ft_putchar(d2);
	ft_putchar(u2);
	if (d1 != 9 && u1 != 8)
	{
		write(1, ", ", 2);
	}
}

int	main(void)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = '0';
	u1 = '0';

	while (d1 != 9 && u1 != 8)
	{
		u2 = u1 + 1;
		d2 = 0;
		while (d2 <= '9')
		{
			u2 = d2;
			while (u2 <= '9')
			{
				u2 ++;
			}
			d2 ++
		}
	}
}
