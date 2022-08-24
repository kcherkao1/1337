/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 19:37:58 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/30 19:38:09 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_word_len(char *str, char *charset)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (str[i] && ft_is_charset(str[i], charset))
		i++;
	while (str[i] && !ft_is_charset(str[i], charset))
	{
		i++;
		len++;
	}
	return (len);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_is_charset(str[i], charset) && str[i])
			i++;
		if (!ft_is_charset(str[i], charset) && str[i])
		{
			count++;
			while (!ft_is_charset(str[i], charset) && str[i])
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	while (i < count_words(str, charset))
	{
		j = 0;
		tab[i] = malloc((ft_word_len(&str[k], charset) + 1) * sizeof(char));
		while (ft_is_charset(str[k], charset) && str[k])
			k++;
		while (!ft_is_charset(str[k], charset) && str[k])
			tab[i][j++] = str[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
