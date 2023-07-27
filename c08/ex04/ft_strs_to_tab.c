/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:14:59 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 14:08:53 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	*ft_strdup(char *str)
{
	char	*dup_str;
	int		i;
	int		length;

	length = ft_strlen(str);
	dup_str = (char *)malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*table;
	int			i;

	table = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!table)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		table[i].size = ft_strlen(av[i]);
		table[i].str = av[i];
		table[i].copy = ft_strdup(av[i]);
		i++;
	}
	table[i].str = 0;
	return (table);
}

/*int	main(void)
{
	int	ac;
	char	**av;
	char	*x;

}*/
