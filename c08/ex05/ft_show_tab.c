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

int	main(void)
{
	ft_show_tab(struct s_stock_str *par)
}
