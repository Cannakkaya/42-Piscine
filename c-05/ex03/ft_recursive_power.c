/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 00:27:25 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 00:27:27 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (!power);
	nb *= ft_recursive_power(nb, power - 1);
	return (nb);
}
/*
int	main(void)
{
	printf("OUTPUT: %d\n", ft_recursive_power(-5, 2));
	return (0);
}*/
