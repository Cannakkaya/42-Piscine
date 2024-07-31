/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:28:43 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/31 14:28:44 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
}

void	ft_error_dict(void)
{
	write (2, "Dict Error\n", 11);
}

int	main(int argc, char **argv)
{
	char	*dictpath;
	char	*nbr;

	if (!ft_check_args(argc, argv, &dictpath, &nbr))
	{
		ft_error();
		return (1);
	}
	if (!ft_check_dict(dictpath))
	{
		free(nbr);
		ft_error_dict();
		return (1);
	}
	if (!ft_init(dictpath, nbr))
	{
		ft_error_dict();
		return (1);
	}
	return (0);
}
