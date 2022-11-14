/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:49:05 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/06 16:15:08 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (&e[0]);
}
/*
int	main(int argc, char **argv)
{
	int	min;
	int	max;
	(void) argc;

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	ft_range(min, max);
	return (0);
}*/
