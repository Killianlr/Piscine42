/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:54:21 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 17:15:09 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (temp < nb / temp)
	{
		if (nb % temp == 0)
			return (0);
		temp++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (0);
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		else
			nb++;
	}
	return (1);
}
/*
int	main()
{
	int	nb;

	nb = 10;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}*/
