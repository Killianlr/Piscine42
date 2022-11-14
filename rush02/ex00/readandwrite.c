/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readandwrite.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaharel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:18:58 by icaharel          #+#    #+#             */
/*   Updated: 2022/10/02 23:34:52 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "fonctions.h"

char	*ft_read(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*dict;

	dict = malloc (sizeof (char) * 10000 + 1);
	if (argc == 3)
		fd = open(argv[1], O_RDONLY);
	else
		fd = open("numbers.dict", O_RDONLY);
	if (fd == -1)
		return (0);
	size = read(fd, dict, 100000);
	dict[size] = '\0';
	close (fd);
	return (dict);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(to_find))
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (str + i);
		}
		i++;
	}
	return ("Dict Error\n");
}

char	*ft_firstword(char *str)
{
	int		i;
	int		j;
	char	*copy;

	i = 0;
	j = 0;
	copy = malloc (sizeof (char) * ft_strlenletter(str) + 1);
	if (!copy)
		return (0);
	while (str[i] == ' ' || str[i] == ':' || (
			str[i] >= 0 && str[i] <= '9'))
		i++;
	while (str[i] != '\0' && str[i] != '\n')
	{
		copy[j] = str[i];
		i++;
		j++;
	}
	copy[i] = '\0';
	i = -1;
	while (copy[++i])
		write(1, &copy[i], 1);
	write(1, " ", 1);
	return (copy);
}

char	*ft_putback(char *str)
{
	int		size;
	int		i;
	char	*bs;

	i = -1;
	size = ft_strlen(str);
	bs = malloc (sizeof (char) * size + 2);
	bs[0] = '\n';
	while (str[++i] != '\0')
		bs[1 + i] = str[i];
	bs[1 + i] = '\0';
	return (bs);
}

void	readwrite(char **split, char *dico)
{	
	int	i;

	i = 0;
	while (split[i])
	{	
		ft_firstword(ft_strstr(dico, ft_putback(split[i])));
		i++;
	}
}
/*
int	main(int argc, char **argv)
{
	readwrite(argv + 1,ft_read(argc,argv));
	return (0);
}*/
