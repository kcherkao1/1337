/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:56:12 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/26 18:56:31 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*csrc;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	csrc = (char *)malloc (len * 1);
	if (csrc == NULL)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		csrc[len] = src[len];
		len++;
	}
	csrc[len] = '\0';
	return (csrc);
}
