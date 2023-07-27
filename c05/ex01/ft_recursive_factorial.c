/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 17:34:34 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/24 16:05:53 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = 0;

	printf("%d", ft_recursive_factorial(nb));
}*/
