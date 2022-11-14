/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:48:15 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/28 11:18:04 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
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
    char    dest[32] = "rolling ";
    char    src[] = "stones";
    unsigned int nb;

    nb = 5;
    printf(" DEST DEBUT : %s \n SRC DEBUT : %s \n ", dest, src);
    ft_strncat(dest, src, nb);
    printf("DEST FIN : %s", dest);
}*/
