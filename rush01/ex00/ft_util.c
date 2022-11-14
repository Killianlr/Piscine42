/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:23:58 by ebremond          #+#    #+#             */
/*   Updated: 2022/09/25 14:43:22 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAILLE
# define TAILLE
# define ROWS 4
#endif

int	ft_space(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

int	ft_charge_params(char *clue, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ROWS * 4 && argv[1][i])
	{
		if (ft_space(argv[1][i]) == 0)
			clue[j++] = argv[1][i];
		i++;
	}
	if (j != ROWS * 4)
		return (1);
	else
		return (0);
}

void	ft_init_str(char *str, int lg)
{
	int	i;

	i = 0;
	while (i < lg)
	{
		str[i] = 0;
		i++;
	}
}

void	ft_fill_str(char *str, char c, int offset, int max)
{
	int	i;

	i = offset;
	while (i < max)
	{
		str[i] = c;
		i++;
	}
}
