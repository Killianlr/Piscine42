/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:16:15 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/25 10:18:50 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAILLE
# define TAILLE
# define ROWS 4
#endif

void	ft_init_str(char *str, int lg);

void	ft_fill_block(char *tab, char *block, int position)
{
	int	i;
	int	pr;
	int	pp;

	ft_init_str(block, ROWS + 1);
	pr = position / ROWS;
	pp = position % ROWS;
	i = 0;
	while (i < ROWS)
	{
		if (pr == 0)
			block[i] = tab[pp + (i * ROWS)];
		else if (pr == 1)
			block[i] = tab[pp + ((ROWS - 1 - i) * ROWS)];
		else if (pr == 2)
			block[i] = tab[i + (pp * ROWS)];
		else
			block[i] = tab[ROWS - 1 - i + (pp * ROWS)];
		i++;
	}
}

int	ft_calc_vis(char *block, int j)
{
	int	vis;
	int	i;

	i = j + 1;
	vis = 1;
	while (j >= 0)
	{
		if (block[j] > block[i])
			vis = 0;
		else if (block[j] == block[i])
			return (-1);
		j--;
	}
	return (vis);
}

int	ft_calc_cpt(char *block, int *rg)
{
	int		vis;
	int		cpt;
	int		i;	

	cpt = 0;
	i = 0;
	while (block[i] && block[i] != '-')
	{
		if (i == 0)
			cpt++;
		else
		{
			vis = ft_calc_vis(block, i - 1);
			if (vis == -1)
				return (-1);
			else
				cpt = cpt + vis;
		}
		i++;
	}
	*rg = i;
	return (cpt);
}

int	ft_clue(char *tab, int position, char value)
{
	char	block[ROWS + 1];
	int		cpt;
	int		i;

	ft_fill_block(tab, block, position);
	cpt = ft_calc_cpt(block, &i);
	if (cpt == -1)
		return (1);
	cpt = '0' + cpt;
	if ((i == ROWS && cpt == value) || (i != ROWS && cpt <= value))
		return (0);
	else
		return (1);
}

int	ft_control(char *tab, char *clue)
{
	int	i;

	i = 0;
	while (i < ROWS * 4)
	{
		if (ft_clue(tab, i, clue[i]))
			return (1);
		i++;
	}
	return (0);
}
