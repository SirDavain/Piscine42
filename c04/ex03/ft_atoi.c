/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:00:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/22 11:06:38 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	pos_or_neg;
	int	nb;

	nb = 0;
	pos_or_neg = nb;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos_or_neg++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str -48;
		str++;
	}
	if (!(pos_or_neg % 2))
		return (nb);
	return (-nb);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s = "   ---+--+1234ab567";
	printf("%d", ft_atoi(s));
}*/
