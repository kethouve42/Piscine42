/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kethouve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:15:30 by kethouve          #+#    #+#             */
/*   Updated: 2023/08/30 11:42:27 by kethouve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	cmp;

	cmp = strcmp(s1, s2);
	return (cmp);
}
/*
int	main(void)
{
	char	s1[] = "hello";
	char	s2[] = "heTlo";

	int	cmp;

	cmp = ft_strcmp(s1, s2);
	printf("%d", cmp);
}*/
