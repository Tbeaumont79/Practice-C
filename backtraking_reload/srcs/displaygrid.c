/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displaygrid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bod <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 18:49:12 by bod               #+#    #+#             */
/*   Updated: 2018/08/27 19:12:56 by bod              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	display(char **grid)
{
	int j;
	int i;

	i = 0;
	while (i < 17)
	{
		j = 0;
		while (j < 17)
		{
			ft_putchar(grid[i][j]);
			if (j <= 16)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	init_grid(char **argv, char **grid)
{
	int j;
	int i;

	i = 0;

	while (i < 17)
	{
		j = 0;
		while (j < 17)
		{
			grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}
}
