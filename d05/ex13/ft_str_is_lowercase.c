/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asun <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 20:26:49 by asun              #+#    #+#             */
/*   Updated: 2016/07/18 20:26:50 by asun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!check_lowercase(str[i]))
			return (0);
		i++;
	}
	return (1);
}
