/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:57:14 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/22 14:35:01 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printchar(char c);

int		same_char(char	*base);

void	write_nbr(int n, int value, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	value;

	value = 0;
	while (base[value])
	{
		if (base[value] == '+' || base[value] == '-')
			return ;
		value++;
	}
	if (value < 2)
		return ;
	if (same_char(base))
		return ;
	write_nbr(nbr, value, base);
}

int	same_char(char	*base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	write_nbr(int n, int value, char *base)
{
	long	long_n;

	long_n = n;
	if (long_n < 0)
	{
		long_n *= -1;
		printchar('-');
	}
	if (long_n >= value)
		write_nbr(long_n / value, value, base);
	printchar(base[long_n % value]);
}

void	printchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	int		n;
	char	*base_symbols;

	n = 42;
	base_symbols = "0123456789abcdef";
	ft_putnbr_base(n, base_symbols);
}*/
