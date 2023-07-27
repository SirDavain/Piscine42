/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:53:55 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/14 12:42:49 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>*/

void	swap(int *p, int *p1);

void	ft_rev_int_tab(int *tab, int size)
{
	int	switches;
	int	i;

	i = 0;
	switches = size / 2;
	while (switches--)
		swap(&(tab[i++]), &(tab[--size]));
}

void	swap(int *p, int *p1)
{
	int	tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}
/*#include <stdio.h>
int	main(void)
{
	int	a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_rev_int_tab(a, 10);
	for (int i = 0; i < 10; i++)
		printf("%d", a[i]);
}*/
