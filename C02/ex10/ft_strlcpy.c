/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 03:38:04 by caakkaya          #+#    #+#             */
/*   Updated: 2024/07/15 03:26:26 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		j;
	int		i;
	int		backup;

	i = 0;
	j = 0;
	backup = size;
	while (size > 1 && dest[i]  != 0)
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (backup != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		++j;
	}
	return (j);
}

#include <stdio.h>

int main()
{
	char dest[20];
	char src[] = "merhaba ahmet";
	unsigned int size = 5;
	printf("%u",ft_strlcpy(dest,src,size));
	
}
