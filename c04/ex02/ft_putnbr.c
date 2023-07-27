/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:28:09 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/24 10:42:33 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	nb_long;
	int		i;
	char	c[10];

	nb_long = nb;
	if (nb_long == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb_long < 0)
	{
		nb_long *= -1;
		write(1, "-", 1);
	}
	i = 0;
	while (nb_long)
	{
		c[i++] = (nb_long % 10) + 48;
		nb_long /= 10;
	}
	while (i > 0)
		write(1, &c[--i], 1);
}
/*int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(100);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}*/
