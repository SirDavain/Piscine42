/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:45:50 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/26 12:36:21 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_ft(int a)
{
	char	c;

	if (a < 10)
	{
		c = a + 48;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = (a / 10) + 48;
	write(1, &c, 1);
	c = a % 10 + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = 0;
	while (a[0] < 99)
	{
		a[1] = a[0] + 1;
		while (a[1] < 100)
		{
			write_ft(a[0]);
			write(1, " ", 1);
			write_ft(a[1]);
			if (a[0] == 98 && a[1] == 99)
				return ;
			write(1, ", ", 2);
			a[1]++;
		}
		a[0]++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
