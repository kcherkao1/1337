/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:42:26 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/29 16:24:53 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	i;
	unsigned int	l;

	a = 0;
	i = 0;
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	while (dest[a] != '\0')
		a++;
	if (size <= a)
		l = l + size;
	else
		l = l + a;
	while (src[i] != '\0' && (a + 1) < size)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (l);
}
