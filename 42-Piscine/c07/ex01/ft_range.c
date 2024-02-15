/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:37:27 by elikos            #+#    #+#             */
/*   Updated: 2024/02/15 17:09:23 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n;
	int	x;

	x = max - min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	n = (int *)malloc(x * sizeof(int));
	while (i < x)
	{
		n[i] = min;
		min++;
		i++;
	}
	return (n);
}
