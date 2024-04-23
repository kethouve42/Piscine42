/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:58:35 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/06 15:26:40 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*count;
	int	i;

	i = 0;
	count = malloc((max - min) * sizeof(int));
	if (!count)
		return (0);
	if (min >= max)
		return (0);
	while (i < max - min)
	{
		count[i] = i + min;
		i++;
	}
	return (count);
	count[i] = 0;
}
/*
#include <stdio.h>
int	main(void)
{
	int *range;

	range = ft_range(2, 5);
	printf("%d, %d, %d", range[0], range[1], range[2]);
}*/
