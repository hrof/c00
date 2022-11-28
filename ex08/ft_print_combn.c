/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:01:57 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/28 14:59:12 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_dig(int n);
void	ft_recursion(int start, int end, int limit);
void	ft_put_fixed_part(int start, int endi);
void	ft_print_combn(int n);

void	ft_put_dig(int n)
{
	char	a;

	a = '0';
	a += n;
	write(1, &a, 1);
}

void	ft_put_fixed_part(int start, int end)
{
	int	counter;

	counter = start;
	while (counter <= end)
	{
		ft_put_dig(counter);
		counter ++;
	}
}

void	ft_recursion(int start, int end, int limit)
{
	int	fluid_part;

	if (end < 9)
	{
		fluid_part = end + 1;
		while (fluid_part < 10)
		{
			ft_put_fixed_part(start, end);
			ft_put_dig(fluid_part);
			fluid_part ++;
			if (start < limit)
				write(1, ", ", 2);
		}
		start ++;
		end ++;
		ft_recursion(start, end, limit);
	}
}

void	ft_print_combn(int n)
{
	ft_recursion (0, n - 2, 10 - n);
}
/*
int	main(void)
{
	int	counter;

	counter = 2;
	while (counter < 10)
	{
		ft_print_combn(counter);
		write(1, "\n", 1);
		counter ++;
	}
	return (0);
}
*/
