/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:23:59 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/16 12:46:58 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		str++;
		length++;
	}
	return (length);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s;
	
	s = "Hello!";
	printf("The string-length is %i", ft_strlen(s));
}*/
