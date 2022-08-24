/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcherkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 06:35:06 by kcherkao          #+#    #+#             */
/*   Updated: 2022/06/18 18:13:40 by kcherkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumiric(char c)
{
	if (
		(c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	)
	{
		return (1);
	}
	return (0);
}

int	ft_is_lowecase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0) && ft_is_lowecase(str[i]))
		{
			str[i] = (str[i] - ('a' - 'A'));
		}
		if (!ft_is_alphanumiric(str[i]) && str[i + 1] != '\0')
		{
			if (ft_is_lowecase(str[i + 1]))
				str[i + 1] = (str[i + 1] - ('a' - 'A'));
		}
		if (
			(i != 0)
			&& ft_is_uppercase(str[i])
			&& ft_is_alphanumiric(str[i - 1])
		)
			str[i] = str[i] + ('a' - 'A');
		i++;
	}
	return (str);
}
