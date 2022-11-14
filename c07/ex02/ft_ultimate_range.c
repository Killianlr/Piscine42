/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:20:21 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/06 16:16:45 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (min < max)
	{
		range[i][j] = min;
		j++;
		min++;
	}
	return (j);
}
/*
int	main(int argc, char **argv)
{
	(void)argc;
	int	min;
	int max;
	int	*tab[0];

	min = atoi(argv[1]);
	max = atoi(argv[2]);
	printf("%d", ft_ultimate_range(tab, min, max));
	return (0);
}*/
