/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 02:51:24 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 02:51:25 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(sizeof(int) * length);
	if (!new_tab)
		return (0);
	i = 0;
	while (i < length)
	{
		new_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	
	return (0);
}*/
