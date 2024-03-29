/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:55:49 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/21 21:43:13 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	else
	{
		while (str[i] >= 97 && str[i] <= 122)
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
	}
	return (0);
}
