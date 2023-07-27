/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:15:10 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/25 09:49:08 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 2147483647)
		return (nb);
	if (nb % 2 == 0 || nb == 1 || nb <= 0)
		return (0);
	i = 2;
	if (nb % 2 != 0)
	{
		while (i < nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (nb);
	}
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
		nb++;
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	int	nb = 878656796;
	printf("%d", ft_find_next_prime(nb));
}*/
