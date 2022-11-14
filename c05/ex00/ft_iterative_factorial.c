/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:15:10 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/04 14:35:12 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	k;

	k = 1;
	i = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (k <= nb)
		{
			i = i * k;
			k++;
		}
	}
	return (i);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	int	nbr;

	nbr = atoi(argv[1]);
	//ft_iterative_factorial(nbr);
	printf("%d", ft_iterative_factorial(nbr));
	return (0);
}*/
