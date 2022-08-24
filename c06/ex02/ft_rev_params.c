/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 00:51:48 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/25 01:06:17 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	while (ac > 1)
	{
		i = 0;
		ac--;
		while (av[ac][i])
		{
			write(1, &av[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}