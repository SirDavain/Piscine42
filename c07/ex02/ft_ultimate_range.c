/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:05:02 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 12:19:02 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*x;
	int	total;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	total = max - min;
	x = (int *)malloc(total * sizeof(int));
	if (x == NULL)
		return (-1);
	i = 0;
	while (i < total)
	{
		x[i] = min + i;
		i++;
	}
	*range = x;
	return (total);
}
/*#include <stdio.h>
int	main(void)
{
	int	min = -7;
	int	max = 0;
	int	*arr;
	int	i = 0;
	int	**range = &arr;
	int	total = ft_ultimate_range(range, min, max);

	while (i < total)
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
