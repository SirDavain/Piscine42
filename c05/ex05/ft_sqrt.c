/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:36:11 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/25 10:22:04 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 0;
	while (result <= nb && i <= 46340)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	nb = 9;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}*/
