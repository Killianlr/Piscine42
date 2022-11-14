/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaharel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:19:37 by icaharel          #+#    #+#             */
/*   Updated: 2022/10/02 23:08:19 by icaharel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonctions.h"

void	ft_rush02(char *input, char *dico)
{
	int		i;
	int		size;
	char	**parsed_nbr;

	parsed_nbr = parse_number(input);
	i = 0;
	size = count_parse(input);
	while (size)
	{
		readwrite(ft_split_space(convert_in_num(parsed_nbr[i])), dico);
		ft_firstword(ft_strstr(dico, ft_mille(size)));
		i++;
		size--;
	}
}
