/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:18:36 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/29 01:08:41 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<bsd/string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (dest[i] == 0)
		return (0);
	if (size - 1 < ft_strlen(src))
		return (size + ft_strlen(src));
	else
	{
		while (dest[i])
			i++;
		while (j + i < size - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src) + ft_strlen(dest));
}
/*
int	main(void)
{
	char	dest[] = "1234";
	char	src[] = "ABCD";
	unsigned int	size;

//	ft_strlcat(dest, src, 2);
	size = 8;
	printf("%d", ft_strlcat(dest, src, size));
	printf("%ld", strlcat(dest, src, size));
}*/
