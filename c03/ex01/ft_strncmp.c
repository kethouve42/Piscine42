/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:31:31 by kethouve          #+#    #+#             */
/*   Updated: 2023/09/06 15:44:54 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "helLp";
	unsigned int	n = 5;

	printf("%d", ft_strncmp(s1, s2, n));
}*/
