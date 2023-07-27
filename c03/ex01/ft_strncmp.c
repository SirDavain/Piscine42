/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:58:30 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/19 14:20:34 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
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
int	main(void)
{
	char	first_string[] = "This is a";
	char	second_string[] = "This is a string";
	int	n = 10;
	
	int	result = ft_strncmp(first_string, second_string, n);
	
	printf("The value is: %d", result);
	return (0);
}*/
