/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:58:43 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/12 15:13:24 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int main(void)
{
	char    str[200];
	int j;
	char    c;

	*str = "this is a sentence.";
	ft_str_is_alpha(str);
	if (1)
		printf("Those are letters");
	else
		printf("What the hell is this?");
}*/
