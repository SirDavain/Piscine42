/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:30:45 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 15:12:12 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *p1, int *p2);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

void	swap(int *p1, int *p2)
{
	int	tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
/*#include <stdio.h>
int main(void)
{
    int c[10] = {4, 5, 2, 6, 3, 1, 8, 7};
    int size = 8;
    for (int i = 0; i < size; i++)
        printf("%d ",c[i]);
    ft_sort_int_tab(c, size);
    printf("The sorted array: \n");
	for (int i = 0; i < size; i++)
        printf("%d ",c[i]);
    return 0;
}*/
