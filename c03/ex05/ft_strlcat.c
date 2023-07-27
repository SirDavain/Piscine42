/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:02:20 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/21 09:04:16 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_buffer;
	unsigned int	src_length;

	dest_buffer = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size <= dest_buffer)
		return (size + src_length);
	i = 0;
	while (src[i] && (dest_buffer + i < size - 1))
	{
		dest[dest_buffer] = src[i];
		i++;
	}
	dest[dest_buffer + i] = '\0';
	return (dest_buffer + src_length);
}

/*#include <stdio.h>
int	main(void)
{
	char	string[20] = "World";
	char	dest[20] = "Hello";
	int	size = 10;

	printf("%i", ft_strlcat(dest, string, size));
}*/
