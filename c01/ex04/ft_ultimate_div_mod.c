/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:28:19 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/11 09:09:08 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 3;
	printf("a = %i b = %i\n", a, b);
	printf("Quotient = %i module = %i\n", a/b, a%b);
	ft_ultimate_div_mod(&a, &b);
	printf("Now the quotient is %i and module equals %i", a, b);
}*/
