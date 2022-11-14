/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_in_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:25:22 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/02 23:39:08 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

char	*convert_one(char *nbr)
{
	char	*dest;

	dest = malloc(3 * sizeof(char));
	if (!dest)
		return (NULL);
	if (nbr[0] == '0')
		dest[0] = '\0';
	else
	{
		dest[0] = nbr[0];
		dest[1] = '\0';
	}
	return (dest);
}

char	*special_two(char *dest, char *nbr)
{
	dest[0] = nbr[0];
	dest[1] = '0';
	dest[2] = ' ';
	dest[3] = nbr[1];
	dest[4] = '\0';
	return (dest);
}

char	*convert_two(char *nbr)
{
	int		i;
	char	*dest;

	dest = malloc (6 * sizeof(char));
	if (!dest)
		return (NULL);
	i = -1;
	if (nbr[0] == '0')
		dest = convert_one(nbr +1);
	else if (nbr[0] == '1' || nbr[1] == '0')
	{
		while (++i < 2)
			dest[i] = nbr[i];
		dest[i] = '\0';
	}
	else
	{
		special_two(dest, nbr);
	}
	return (dest);
}

char	*convert_three(char *nbr)
{
	char	*dest;

	dest = malloc(12 * sizeof(char));
	if (!dest)
		return (NULL);
	if (nbr[0] == '0')
		dest = convert_two(nbr + 1);
	else
	{
		dest[0] = nbr[0];
		ft_strcpy(dest + 1, " 100 ");
		ft_strcpy(dest + 6, convert_two(nbr +1));
	}
	return (dest);
}

char	*convert_in_num(char *nbr)
{
	char		*converted_nbr;
	const int	nb_size = ft_strlen(nbr);

	converted_nbr = malloc(12 * sizeof(char));
	if (nb_size == 3)
		converted_nbr = convert_three(nbr);
	else if (nb_size == 2)
		converted_nbr = convert_two(nbr);
	else if (nb_size == 1)
		converted_nbr = convert_one(nbr);
	return (converted_nbr);
}
/*
int	main()
{
	char	tab[] = "810";

	convert_in_num(tab);
printf("%s\n", convert_in_num(tab));
	return (0);
}*/
