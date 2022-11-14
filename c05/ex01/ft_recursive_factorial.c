/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:44:57 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 17:10:45 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb >= 1)
		nb = nb * (ft_recursive_factorial(nb - 1));
	return (nb);
}
/*
int	main()
{
	int	nbr;

	nbr = 10;
	printf("%d", ft_recursive_factorial(nbr));
	return (0);
}*/
