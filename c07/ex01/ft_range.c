/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:39:14 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/28 20:31:03 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	result = 0;
	i = 0;
	if ((max - min) <= 0)
		return (0);
	result = (int *) malloc ((max - min) * 4);
	if (result == NULL)
		return (NULL);
	while ((max - min) >= 0)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
