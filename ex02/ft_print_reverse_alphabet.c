/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzhdanov <rzhdanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:50:40 by rzhdanov          #+#    #+#             */
/*   Updated: 2022/11/24 13:57:21 by rzhdanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void);

void ft_print_reverse_alphabet(void)
{
	char	c;
	c = 122;
	while(c >= 97)
	{	
		write(1, &c, 1);
		c --;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}

