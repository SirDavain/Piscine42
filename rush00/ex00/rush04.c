/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:59:35 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/11 16:52:56 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	firstcol(int x)
{
	ft_putchar('A');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar('B');
		else
			ft_putchar('C');
		x--;
	}
	ft_putchar('\n');
}

void	betweencol(int x)
{
	ft_putchar('B');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar(' ');
		else
			ft_putchar('B');
		x--;
	}
	ft_putchar('\n');
}

void	lastcol(int x)
{
	ft_putchar('C');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar('B');
		else
			ft_putchar('A');
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	sizey;

	sizey = y;
	if (x != 0 || y != 0)
	{
		while (y > 0)
		{
			if (y == sizey)
				firstcol(x);
			else
			{
				if (y > 1)
					betweencol(x);
				else
					lastcol(x);
			}
			y--;
		}
		ft_putchar('\n');
	}
}
