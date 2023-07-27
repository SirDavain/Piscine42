/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:15:23 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 12:23:56 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*x;
	int	range;
	int	i;

	range = max - min;
	x = (int *)malloc(range * sizeof(int));
	if (min >= max)
	{
		x = NULL;
		return (0);
	}
	i = 0;
	while (i < range)
	{
		x[i] = min + i;
		i++;
	}
	return (x);
}
/*#include <stdio.h>
int	main(void)
{
	//min = -2147483648;
	//max = 2147483647 - 1;
	int	min = -7;
	int	max = 0;
	int	*arr;
	int size = max - min;
	int	i = 0;

	arr = ft_range(min, max);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
