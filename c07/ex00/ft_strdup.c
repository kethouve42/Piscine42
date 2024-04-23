/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:24:15 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/06 12:54:22 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	j;

	j = 0;
	while (src[j])
		j++;
	return (j);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(ft_strlen(src) * sizeof(char));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
	dest = 0;
}

/*#include <stdio.h>
int	main(void)
{
	char	src[] = "HelloWorld Hello";
	printf("%s", ft_strdup(src));
}*/
