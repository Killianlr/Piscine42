/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:52:49 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 22:30:50 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 0;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 0)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main()
{
	int	nb;
	int	power;

	nb = 5;
	power = 3;
	ft_recursive_power(nb, power);
	return (0);
}*/
