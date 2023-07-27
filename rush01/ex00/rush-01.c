/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:41:47 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/15 16:53:20 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int	validate_input(int argc, char **argv, int matrix[4][4])
{
	int	i;
	int	j;
	int	a;
	char	*error;

	i = 0;
	j = 0;
	a = 2 * 8 + 1;
	error = "Error";
	if (argc != a)
	{
		write(1, &a, 2);
		write(1, "\n", 1);
		return (0);
	}
	while (argc > 0)
	{
		if (matrix[i][i] >= '1' && matrix[i][i] <= '4')
			i++;
		else
		{
			write(1, &a, 6);
			write(1, "\n", 1);
			return (0);
		}
		argc--;
	}
}

void	placecol(void)
{
	
}
int	main(int argc, char **argv)
{
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
	int	matrix[4][4];
	int	a;

	a = 2 * 8 + 1;
	if (argc == a)
		validate_input(int argc, char *argv, matrix[4][4]);
	else
		return
}
