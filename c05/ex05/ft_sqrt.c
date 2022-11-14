/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:26:45 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/03 15:26:47 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	temp;

	temp = 2;
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	while (temp * temp <= nb && nb <= 46340)
	{
		if (temp * temp == nb)
			return (temp);
		temp++;
	}
	return (0);
}
/*
int	main()
{
	int	nb;

	nb = 9;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
