/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:15:31 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/19 14:21:14 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char	*first_string = "Hello, my name is David";
	char	*second_string = "Hello, my name is";
	int	result = ft_strcmp(first_string, second_string);

	if (result == 0)
		printf("The strings are the same.");
	else
		printf("The strings are different.");
	printf("\nThe returned value is: %d", result);
	return (0);
}*/
