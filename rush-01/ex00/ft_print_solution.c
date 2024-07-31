/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:24:07 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 14:24:08 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_solution(int **matrix, int n)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < n)
	{
		while (x < n)
		{
			ft_putchar(matrix[y][x] + '0');
			if (x < n - 1)
				ft_putchar(' ');
			x++;
		}
		x = 0;
		ft_putchar('\n');
		y++;
	}
}
