/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:53:35 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/29 00:57:45 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && (i < (n - 1)))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	unsigned int	n;
	char	s1[] = "bonsoir";
	char	s2[] = "boNsoir";

	n = 4;
	ft_strncmp(s1, s2, n);
	printf("%d", ft_strncmp(s1, s2, n));
	return (0);
}*/
