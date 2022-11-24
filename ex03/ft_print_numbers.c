/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:25:15 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/24 14:29:40 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

void ft_print_numbers(void)
{
	char	n;
	n = 48;
	while (n <= 57)
	{
		write(1, &n, 1);
		n ++;
	}
}

int main(void)
{
	ft_print_numbers();
}
