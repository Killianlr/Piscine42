/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpylypya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:33:18 by rpylypya          #+#    #+#             */
/*   Updated: 2022/09/18 13:51:13 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	second_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 1 || y < 1)
		return ;
	while (i <= y)
	{
		if (i == 1 || i == y)
			first_line(x);
		else
			second_line(x);
		i++;
	}
}
