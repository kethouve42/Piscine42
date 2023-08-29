/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:33:14 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/29 16:03:22 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	n = 0;
	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main()
{
	char	dest[] = "failed";
	char	src[] = "success";
	unsigned int	n = 0;

	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, n), dest);
}*/
