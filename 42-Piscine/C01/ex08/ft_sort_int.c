/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:41:45 by elikos            #+#    #+#             */
/*   Updated: 2024/02/03 23:17:34 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int(int *tab, int size)
{
	int	temp;
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] < tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size --;
	}
}
