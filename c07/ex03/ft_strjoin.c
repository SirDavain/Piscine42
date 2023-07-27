/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:42:54 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/26 12:29:10 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	//strs is pointing at the strings to be concatenated
	//sep is going to be seperating the strings
	//size is the number of strings
	if (size == 0)
		//return empty string to be freed()
	char	*x;

	x = (int *)malloc(
	
}

int	main(void)
{
	int	size = 3;

}
