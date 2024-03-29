/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:16:08 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/21 21:50:39 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 0)
		return (1);
	{
		while (str[i] >= 65 && str[i] <= 90)
		{
			i++;
			if (str[i] == '\0')
				return (1);
		}
	}
	return (0);
}
