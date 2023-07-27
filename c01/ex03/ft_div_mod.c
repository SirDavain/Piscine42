/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:34:32 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/17 13:49:47 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void){
	int	n;
	int	n1;
	int	div;
	int	mod;

	n = 7;
	n1 = 0;
	ft_div_mod(n, n1, &div, &mod);
	printf("Product of the division:\n%i/%i = %i with remainder %i\n",
   	n, n1, div, mod);
}*/
