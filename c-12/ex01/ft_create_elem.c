/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 02:53:09 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 02:53:10 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*item;
	
	item = malloc(sizeof(t_list));
	if (item == NULL)
		return (NULL);
	item->data = data;
	item->next = NULL;
	return (item);
}
