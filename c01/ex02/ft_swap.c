/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:15:53 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/07 16:35:50 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int	n;
	int	n1;

	n = 24;
	n1 = 42;
	printf("This is a before: %d\n", n);
	ft_swap(&n, &n1);
	printf("This is an after: %d\n", n);
}*/
