/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 04:02:06 by elikos            #+#    #+#             */
/*   Updated: 2024/02/15 17:09:30 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	lenplus(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(lenplus(src) * sizeof(char));
	if (!c)
	{
		return (0);
	}
	while (src[i] != 0)
	{
		c[i] = src[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
