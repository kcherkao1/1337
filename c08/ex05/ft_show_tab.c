/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:55:02 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/30 17:55:07 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
}

char	*strnmb(int nb, char *num)
{
	num[0] = (nb / 1000000000) + '0';
	num[1] = ((nb % 1000000000) / 100000000) + '0';
	num[2] = ((nb % 100000000) / 10000000) + '0';
	num[3] = ((nb % 10000000) / 1000000) + '0';
	num[4] = ((nb % 1000000) / 100000) + '0';
	num[5] = ((nb % 100000) / 10000) + '0';
	num[6] = ((nb % 10000) / 1000) + '0';
	num[7] = ((nb % 1000) / 100) + '0';
	num[8] = ((nb % 100) / 10) + '0';
	num[9] = (nb % 10) + '0';
	num[10] = '\0';
	return (num);
}

void	putnums(char *num)
{
	int	n;
	int	close;

	n = 0;
	close = 0;
	while (num[n])
	{
		if (num[n] != '0' || close)
		{
			write(1, &num[n], 1);
			close = 1;
		}
		n++;
	}
}

void	ft_putnbr(int nb)
{
	char			num[11];
	char			c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	c = '0';
	if (nb == 0)
	{
		write(1, &c, 1);
		return ;
	}
	c = '-';
	if (nb < 0)
	{
		nb = nb - nb - nb;
		write(1, &c, 1);
	}
	strnmb(nb, num);
	putnums(num);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	c;

	i = 0;
	c = '\n';
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, &c, 1);
		ft_putnbr(par[i].size);
		write(1, &c, 1);
		ft_putstr(par[i].copy);
		write(1, &c, 1);
		i++;
	}
}
