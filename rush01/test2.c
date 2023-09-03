/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:26:05 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/02 18:39:22 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	init_borders(int **tab, char *str)
{
	int	strindex = 0;
	int	tabindex = 1;
	while (strindex < 31)
	{
		if (strindex < 7)
		{
			tab[0][tabindex] = str[strindex] - '0';
		}
		else if

int **init_tab(char *str)
{
	int	index;
	int	**tab;
	int	i;

	tab = malloc(6 * sizeof(int));
	if (!tab)
	{
		return (NULL);
	}
	i = 0;
	while (i< 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		if (!tab)
		{
			return (NULL);
		}
		i++;
	}
	index = 0;
	while (index < 36)
	{
		tab[index / 6][index % 6] = 0;
		index++;
	}
	init_borders(tab, str);
	return (tab);
}

int	main(arc, **argv)
{
	int	**tab;
	int	i;
	tab = int_tab(argv[1]);
	if (!tab)
	{
		return (-1);
	}
