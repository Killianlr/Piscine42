/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebremond <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:23:58 by ebremond          #+#    #+#             */
/*   Updated: 2022/09/25 10:20:24 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAILLE
# define TAILLE
# define ROWS 4
#endif

int		ft_control(char *tab, char *clue);
void	ft_fill_str(char *str, char c, int offset, int max);

char	ft_find_val(char *tab, int *rg)
{
	char	val;

	if (rg == 0)
	{
		if (tab[*rg] == '-')
			return (0);
		val = '1';
	}
	else
	{
		if (tab[*rg] == '-')
		{
			*rg = *rg - 1;
			val = tab[*rg] + 1;
		}
		else
			val = '0' + 1;
	}
	return (val);
}

int	ft_fill_tab(char *tab, char *clue)
{
	int		rg;
	char	val;

	rg = 0;
	while (tab[rg] && tab[rg] != '-')
		rg++;
	if (rg == ROWS * ROWS)
		return (0);
	val = ft_find_val(tab, &rg);
	if (val == 0)
		return (1);
	while (val <= '0' + ROWS)
	{
		tab[rg] = val;
		if (!ft_control(tab, clue))
		{
			ft_fill_str(tab, '\0', rg + 1, ROWS * ROWS);
			return (ft_fill_tab(tab, clue));
		}
		val++;
	}
	ft_fill_str(tab, '-', rg, ROWS * ROWS);
	return (ft_fill_tab(tab, clue));
}
