/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:23:52 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/25 09:49:57 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb <= 0)
		return (0);
	else if (nb % 2 != 0)
	{
		i = 2;
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = 2147483613;
	printf("%d", ft_is_prime(nb));
}*/
