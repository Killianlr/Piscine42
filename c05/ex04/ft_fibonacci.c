/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:26:01 by kle-rest          #+#    #+#             */
/*   Updated: 2022/10/03 12:26:05 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{	
	int	n;

	n = 2;
	if (index < 0)
		return (-1);
	else if (index == 0)
		n = 0;
	else if (index == 1)
		n = 1;
	else if (index > 1)
		n = (ft_fibonacci(index -2) + ft_fibonacci(index -1));
	return (n);
}
/*
int	main()
{
	int index;

	index = 1;
printf("%d", ft_fibonacci(index));
	return (0);
}*/
