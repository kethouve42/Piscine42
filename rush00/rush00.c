/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <kethouve@42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:21:58 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/26 12:38:35 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.h"

void    rush(int x, int y)
{
	ft_putchar(del, derl, mel, mrel);
	while (y != 0 || y ==1)
	{
		if (x != 0 || x == 1)
		{
			write(1, &del, 1);
			x--;
		}
		if (x > 1)
		{
			write(1, &mel, 1);
			x--
		}
		write(1, "\n", 1);
	}
	while (y >1)
	{
		if (x != 0 || x ==1)
		{
			write(1, &derl, 1);
			x--;
		}
		if (x > 1)
		{
			write(1, &merl, 1);
			x--;
		}
		write(1, "\n", 1)
	}
}
