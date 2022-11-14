/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:18:49 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/21 21:49:54 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_loop_min(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] > 64 && c[i] < 91)
			c[i] = c[i] + 32;
		i++;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_loop_min(str);
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
			i++;
		}
		while ((str[i] > 47 && str[i] < 58)
			|| (str[i] > 96 && str[i] < 123))
			i++;
		i++;
	}
	return (str);
}
