/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 18:56:03 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/13 23:58:08 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	j = 1;
	while (j <= size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				c = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = c;
			}
			i++;
		}
		j++;
	}
}
