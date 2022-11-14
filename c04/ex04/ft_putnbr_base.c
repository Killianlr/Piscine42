/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:48:22 by kle-rest          #+#    #+#             */
/*   Updated: 2022/09/29 13:00:20 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if ((base[0] == 0) || (base[1] == 0))
		return (1);
	while (base[i])
	{
		while (base[j])
		{
			if ((base[i] == '+') || (base[i] == '-'))
				return (1);
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	ft_recursive(long int nbr, char *base)
{
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr < ft_strlen(base))
		ft_putchar(base[nbr]);
	else
	{
		ft_recursive(nbr / (ft_strlen(base)), base);
		ft_recursive(nbr % (ft_strlen(base)), base);
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = nbr;
	if (ft_check(base))
		return ;
	ft_recursive(nb, base);
}
/*
int	main(void)
{
	int	nbr;
	char	base[] = "01";

	nbr = -2147483648;
	ft_putnbr_base(nbr, base);
	return (0);
}*/
