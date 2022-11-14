/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:29:29 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/29 00:58:53 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	ft_strlen(char *c)
{
	int	j;

	j = 0;
	while (c[j])
		j++;
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == 0)
		return (str);
	if (!str[i])
		return (0);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == ft_strlen(to_find) - 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>

int	main()
{
	char	*str = "hello";
	char	*to_find = "hello";
	
	printf("la solution est : %s\n", ft_strstr(str, to_find));
	char	*str1 = "hello";
	char	*to_find1 = "hello";

	
	printf("la solution est : %s\n", strstr(str1, to_find1));
	return (0);
}*/
