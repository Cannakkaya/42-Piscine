/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 02:53:23 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 02:53:23 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ptr;
	t_list	*last;

	ptr = ft_create_elem(data);
	if (!(*begin_list))
		*begin_list = ptr;
	else
	{
		last = ft_list_last(*begin_list);
		last->next = ptr;
	}
}
