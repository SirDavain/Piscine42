/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 14:59:35 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/08 22:23:39 by cgobl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	firstcol(int x)
{
	ft_putchar('/');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar('*');
		else
			ft_putchar('\\');
		x--;
	}
	ft_putchar('\n');
}

void	betweencol(int x)
{
	ft_putchar('*');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar(' ');
		else
			ft_putchar('*');
		x--;
	}
	ft_putchar('\n');
}

void	lastcol(int x)
{
	ft_putchar('\\');
	while (x > 1)
	{
		if (x > 2)
			ft_putchar('*');
		else
			ft_putchar('/');
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
