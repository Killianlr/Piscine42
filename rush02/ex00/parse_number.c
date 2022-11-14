/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvieilhe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:01:26 by bvieilhe          #+#    #+#             */
/*   Updated: 2022/10/02 22:14:37 by bvieilhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int	add_char(int size)
{
	if (size % 3 == 0)
		return (3);
	else
		return (size % 3);
}

int	count_parse(char *str)
{
	int	size;
	int	char_nbr;

	char_nbr = ft_strlen(str);
	size = 0;
	while (char_nbr > 0)
	{
		size++;
		char_nbr -= 3;
	}
	return (size);
}

char	**fill_parse(char **parsed_nbr, char *str, int size)
{
	int			i;
	int			j;
	const int	nb_of_parse = count_parse(str);

	i = 0;
	while (i < nb_of_parse)
	{
		j = 0;
		parsed_nbr[i] = malloc((add_char(size) + 1) * sizeof(char));
		if (!(parsed_nbr[i]))
			return (NULL);
		while (j < add_char(size))
		{
			parsed_nbr[i][j] = str[j];
			j++;
		}
		parsed_nbr[i][j] = '\0';
		size -= add_char(size);
		str += j;
		i++;
	}
	parsed_nbr[i] = 0;
	return (parsed_nbr);
}

char	**parse_number(char *str)
{
	int		size;
	char	**parsed_nbr;

	size = ft_strlen(str);
	parsed_nbr = malloc((count_parse(str) + 1) * sizeof(char *));
	if (!parsed_nbr)
		return (NULL);
	parsed_nbr = fill_parse(parsed_nbr, str, size);
	return (parsed_nbr);
}

/************************* main *******************************/
/*
int	main(int ac, char **av)
{
	char	**parsed_nbr;
	int	i;

	if (ac == 2)
	{
		i = 0;
		parsed_nbr = parse_number(av[1]);
		while(i < 10)
		{
			printf("%s\n", parsed_nbr[i]);
			i++;
		}
	}
	return (0);
}
*/
