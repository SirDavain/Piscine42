/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:58:08 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 12:38:17 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*x;
	int		i;
	int		length;

	length = ft_strlen(src);
	x = (char *)malloc((length + 1) * sizeof(char));
	if (x == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
/*#include <stdio.h>
int	main(void)
{
	char	*c;
	c = "Hello";
	printf("%s", c);
	return (0);
}*/
