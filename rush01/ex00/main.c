/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebremond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:23:58 by ebremond          #+#    #+#             */
/*   Updated: 2022/09/22 12:05:21 by ebremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#ifndef TAILLE
# define TAILLE
# define ROWS 4
#endif

void	ft_init_str(char *str, int lg);
int		ft_charge_params(char *clue, char **argv);
int		ft_fill_tab(char *tab, char *clue);

int	ft_init_main(int argc, char **argv, char *tab, char *clue)
{
	if (argc != 2)
	{
		write(1, "Entrez une chaine contenant des chiffres\n", 41);
		return (1);
	}
	ft_init_str(clue, ROWS * 4 + 1);
	ft_init_str(tab, ROWS * ROWS + 1);
	if (ft_charge_params(clue, argv))
	{
		write(1, "Parametres incorrects\n", 22);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	char	tab[ROWS * ROWS + 1];
	char	clue[ROWS * 4 + 1];

	if (ft_init_main(argc, argv, tab, clue))
		return (1);
	if (ft_fill_tab(tab, clue))
	{
		write(1, "Aucune solution\n", 16);
		return (0);
	}
	else
	{
		i = 0;
		while (i < ROWS * ROWS)
		{
			write(1, &tab[i], 1);
			if ((i + 1) % ROWS)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			i++;
		}
		return (0);
	}
}
