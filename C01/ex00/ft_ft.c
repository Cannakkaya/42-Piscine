/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 05:33:47 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/15 00:36:00 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
#include <stdio.h>
int main()
{
	int a;
	int *b;
	a = 25;
	b = &a;
	ft_ft(b);
	printf("%d", a);

}