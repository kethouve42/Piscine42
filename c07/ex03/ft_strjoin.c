/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:24:24 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/05 11:05:59 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(int size, char **strs, char *sep)
{
	int	j;
	int	res;

	j = 0;
	res = 0;
	while ((*strs)[j])
	{
		j++;
	}
	res = j + size + 1;
	return (res);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char	*c;

	i = 0;
	c = malloc(ft_count(size, strs, sep) * sizeof(char));
	if (size == 0)
	{
		while (c[i])
		{
			c = '\0';
			i++;
		}
	}
	if (size >= 1)
	{
		while (c[i])
		{
			c = (*strs)[i];
			i++;
		}
	}
	return (c);
	c = 0;
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
