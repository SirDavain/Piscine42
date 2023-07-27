/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:22:42 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/21 09:21:59 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*s1;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[0])
			i++;
		else
		{
			s1 = &str[i];
			j = 0;
			while (s1[j] == to_find[j])
			{
				j++;
				if (to_find[j] == '\0')
					return (s1);
			}
			i++;
		}
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[100] = "This, is a haystack";
	char	needle[10] = "is";
	char	*result = ft_strstr(str, needle);

	if (result)
	{
		printf("String \"%s\" was found in \"%s\"\n", needle, result);
	}
	else
		printf("Needle \"%s\" was not found in string \"%s\".\n", needle, str);
	return (0);
}*/
