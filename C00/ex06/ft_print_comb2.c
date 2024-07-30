/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:19:26 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 00:19:27 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(int y, int z)
{
	ft_putchar(y / 10 + 48);
	ft_putchar(y % 10 + 48);
	write(1, " ", 1);
	ft_putchar(z / 10 + 48);
	ft_putchar(z % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	y;
	int	z;

	y = 0;
	while (y <= 98)
	{
		z = y + 1;
		while (z <= 99)
		{
			ft_print_numbers(y, z);
			if (y != 98 || z != 99)
				write(1, ", ", 2);
			z++;
		}
		y++;
	}
}
