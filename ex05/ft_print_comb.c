/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:46:03 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/24 20:28:12 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_several_chars(char c, char d, char u);

void	ft_put_several_chars(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
}

int main(void)
{
	char	c;
	char	d;
	char	u;
	char	m;

	c = '0';
	m = ',';
	while(c <= '7')
	{
		d = c + 1;
		while(d <= '8')
		{
			u = d + 1;
			while(u <= '9')
			{
				ft_put_several_chars(c, d, u);
				if (c < '7')
				{
					write(1, ", ", 2);
				}
				u ++;
			}
			d ++;
		}
		c ++;
	}
	return 0;
}
