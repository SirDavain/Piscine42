/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dulrich <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:36:20 by dulrich           #+#    #+#             */
/*   Updated: 2023/07/27 14:55:12 by dulrich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

void    putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void    putnbr(int nb) 
{
    long    nb_long;
    char    c[10];
    int     i;  

    nb_long = nb; 
    if (nb_long == 0)
    {
        write(1, "0", 1); 
        return ;
    }   
    if (nb_long < 0)
    {
        nb_long = -nb_long;
        write(1, "-", 1); 
    }   
    i = 0;
    while (nb_long)
    {
        c[i++] = (nb_long % 10) + 48; 
        nb_long /= 10; 
    }   
    while (i > 0)
        write(1, &c[--i], 1); 
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		putstr(par[i].str);
		write(1, "\n", 1);
		putnbr(par[i].size);
		write(1, "\n", 1);
		putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_stock_str *stock_table = ft_strs_to_tab(argc - 1, &argv[1]);
	ft_show_tab(stock_table);
}
