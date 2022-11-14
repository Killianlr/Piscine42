/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:21:37 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/28 11:17:39 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main()
{
    char    dest[14] = "rolling ";
    char    src[8] = "stones";
    printf(" DEST DEBUT : %s \n SRC DEBUT : %s \n ", dest, src);
    ft_strcat(dest, src);
    printf("DEST FIN : %s", dest);
    return (0);
}*/
