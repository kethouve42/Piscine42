/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:52:53 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/31 13:53:42 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && i < size - 1)
	{
		dest[i +j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (0);
}

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World Hello World";
	unsigned int	size = 10;

	ft_strlcat(dest, src, size);
	printf("%s", dest);
}*/
