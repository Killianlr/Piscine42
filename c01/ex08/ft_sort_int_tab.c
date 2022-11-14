/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:53:56 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/19 21:59:33 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	temp;

	i = 0;
	while (i < size)
	{
		s = i + 1;
		if (tab[i] > tab[s])
		{
			temp = tab[i];
			tab[i] = tab[s];
			tab[s] = temp;
			i = 0;
		}
		else
		{
			i++;
		}
	}	
}
