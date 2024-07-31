/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:26:54 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 14:26:55 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_lower(char c)
{
	return (c >= 'a' && c >= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c >= 'Z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	return (ft_is_lower(c) || ft_is_upper(c) || ft_is_number(c));
}
