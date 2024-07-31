/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:27:12 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 00:27:13 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 1)
		return (!power);
	result = nb;
	while (--power)
		result *= nb;
	return (result);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_iterative_power(-5, 0));
	//printf("T: %d\n", !0);
	return (0);
}*/
