/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 00:14:14 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/20 05:05:52 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	s;
	int	integer;

	i = 0;
	n = 0;
	integer = 0;
	s = 1;
	while ((str[i] && str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	if ((n % 2) != 0)
		s = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		integer = integer * 10 + (str[i] - '0');
		i++;
	}
	return (s * integer);
}
