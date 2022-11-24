/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:49:15 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/24 14:53:27 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 2);
}

int	main(void)
{
	char	c;

	c = 'a';
	ft_putchar(c);
	return (0);
}
