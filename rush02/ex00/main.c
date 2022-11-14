/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaharel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:04:52 by icaharel          #+#    #+#             */
/*   Updated: 2022/10/02 23:37:32 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

int	main(int argc, char **argv)
{
	char	*dico;
	int		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] < '0' || argv[1][i] > '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		dico = ft_read(argc, argv);
		ft_rush02(argv[1], dico);
	}
	return (0);
}
