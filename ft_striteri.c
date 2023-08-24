/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkostany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:21:11 by nkostany          #+#    #+#             */
/*   Updated: 2023/01/26 13:28:56 by nkostany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s != 0 && f != 0)
	{
		i = ft_strlen(s);
		while (i > j)
		{
			(*f)(j, s);
			s++;
			j++;
		}
	}
}