/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:48:25 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/06 16:21:31 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	o;

	o = 0;
	while (str[o])
		o++;
	return (o);
}

char	*ft_strcpy(char *dest, char *src, int i)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count_row(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
			j++;
		j = 0;
		i++;
	}
	return (i);
}
/*
int	ft_strlen_2d(char **str)
{
	int	j;
	int	k;
	int l;

	j = 0;
	k = 0;
	l = 0;
	while (str[j])
	{
		while (str[j][k])
		{
			k++;
		}
		l += k;
		k = 0;
		j++;
	}
	return (l);
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	int		j;
	int		i;
	char	*join;

	i = 0;
	j = 0;
	lenght = size + (ft_strlen(sep) * (ft_count_row(strs) - 1));
	join = malloc(sizeof(char) * lenght);
	if (size == 0 || !join)
		return (join = NULL);
	while (strs[j])
	{
		ft_strcpy(join, strs[j], i);
		i = ft_strlen(join);
		if (j < ft_count_row(strs) - 1)
		{
			ft_strcpy(join, sep, i);
			i = ft_strlen(join);
		}
		j++;
	}
	join[i] = '\0';
	return (join);
}
/*
int	main()
{
	char *strs[100];
	char *sep;
	int	size;

	strs[0] ="kjnoit4q";
	strs[1] ="lknoijt3q";
	strs[2] ="kjbiglkgpoq";
	strs[3] ="lkengiotq";
	sep = "-~-";
	size = ft_strlen_2d(strs);
	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}*/
