/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:17:02 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 17:14:23 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
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
/*
int	main()
{
	int	nb;

	nb = 8;
	printf("%d", ft_is_prime(nb));
	return (0);
}*/
