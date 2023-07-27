/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:58:36 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/24 16:44:22 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	pow;

	n = nb;
	pow = power;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (pow > 1)
	{
		n *= nb;
		pow--;
	}
	return (n);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = 5;
	int	power = 4;
	printf("%d", ft_iterative_power(nb, power));
}*/
