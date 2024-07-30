/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 02:12:06 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/14 02:12:28 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			i++;
		}
		str++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
		return (1);
}