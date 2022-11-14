/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:35:27 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 22:29:49 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*
int	main()
{
	int	nb;
	int	power;

	nb = 0;
	power = 5;

	ft_iterative_power(nb, power);
	return (0);
}*/
