/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:06:03 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/03 18:07:52 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *string)
{
	int	i;
	char	c;

	i = 0;
	while (string[i])
	{
		c = string[i];
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	j;

	j = 1;
	while (j < argc)
	{
		j++;
	}
	while (j > 1)
	{
		ft_print(argv[j]);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
