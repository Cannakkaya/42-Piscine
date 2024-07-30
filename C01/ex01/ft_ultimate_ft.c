/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:04:59 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/15 00:40:14 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int main()
{
	int a;
	int *number;
	int **number1;
	int ***number2;
	int ****number3;
	int *****number4;
	int ******number5;
	int *******number6;
	int ********number7;
	int *********number8;

	a = &number;
	number = &number1;
	number7 = &number8;
	ft_ultimate_ft(number8);
	printf("%d",a);


}