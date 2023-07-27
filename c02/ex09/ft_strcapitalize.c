/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:53:38 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 09:22:34 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96) 
			|| (str[i] >= 123 && str[i] <= 126))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}
/*#include <stdio.h>
int	main()
{
	char	str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	//printf("Enter a sentence to be capitalized: ");
	//scanf("%[^\n]s", str);
	printf("%s", ft_strcapitalize(str));
	//printf("The capizalized string is: %s\n", str);
	return (0);
}*/
