/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaharel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:00:15 by icaharel          #+#    #+#             */
/*   Updated: 2022/10/02 23:09:09 by icaharel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	ft_strlenletter(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ':' || str[i] == ' ' || (
			str[i] >= '0' && str[i] <= '9'))
		i++;
	while (((str[i] >= 'a' && str[i] <= 'z') || (
				(str[i] >= 'A') && (str[i] <= 'Z')) || (
				str[i] == ' ')) && (str[i] != '\n'))
	{
		j++;
		i++;
	}
	return (j);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				c;
	unsigned int	i;

	i = 0;
	c = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			c = s1[i] - s2[i];
			return (c);
		}
	}
	return (0);
}
