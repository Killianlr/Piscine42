/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:19:06 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/19 18:05:25 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a / 10 + 48);
			ft_write(a % 10 + 48);
			ft_write(32);
			ft_write(b / 10 + 48);
			ft_write(b % 10 + 48);
			if (a + b < 197)
			{
				ft_write(',');
				ft_write(32);
			}
			++b;
		}
		++a;
		b = a + 1;
	}
}
