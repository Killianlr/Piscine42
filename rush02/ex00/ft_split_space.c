/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_space.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvieilhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:30:16 by bvieilhe          #+#    #+#             */
/*   Updated: 2022/10/02 23:12:29 by icaharel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			count++;
		i++;
	}
	return (count);
}

int	nbr_size(char *str)
{
	int	i;

	i = 0;
	while (*str == ' ')
		str++;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

char	**ft_split_space(char *str)
{
	int			i;
	int			j;
	char		**splited_nbr;
	const int	splited_size = count_words(str);

	splited_nbr = malloc((count_words(str) + 1) * sizeof(char *));
	if (!splited_nbr)
		return (NULL);
	i = -1;
	while (++i <= splited_size)
	{
		j = 0;
		splited_nbr[i] = malloc((nbr_size(str) + 1) * sizeof(char));
		if (!splited_nbr[i])
			return (NULL);
		while (j < nbr_size(str))
		{
			splited_nbr[i][j] = str[j];
			j++;
		}
		splited_nbr[i][j] = '\0';
		str += j + 1;
	}
	splited_nbr[i] = 0;
	return (splited_nbr);
}

/*************************** main *************************/
/*
test c lui le bon
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**nbr;
	int	i;

	if (ac == 2)
	{
		nbr = ft_split_space(av[1]);
		i = 0;
		while (nbr[i])
		{
			printf("%s\n", nbr[i]);
			i++;
		}
	}
	return (0);
}
*/
