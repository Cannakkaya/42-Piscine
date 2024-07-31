/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 02:53:41 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 02:53:41 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*List;
	t_list	*elem;

	i = 0;
	if (!size || !(*strs))
		return (NULL);
	List = NULL;
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		if (!elem)
			return (List);
		elem->next = List;
		List = elem;
		i++; 
	}
	return (List);
}
