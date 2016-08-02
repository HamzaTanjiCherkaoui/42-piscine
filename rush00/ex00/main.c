/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asun <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 13:10:01 by asun              #+#    #+#             */
/*   Updated: 2016/07/16 13:10:03 by asun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int col, int row);
int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}