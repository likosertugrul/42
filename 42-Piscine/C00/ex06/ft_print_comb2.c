/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 04:56:11 by elikos            #+#    #+#             */
/*   Updated: 2024/01/29 11:15:26 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putchar((first / 10) + 48);
			ft_putchar((first % 10) + 48);
			ft_putchar(' ');
			ft_putchar((first / 10) + 48);
			ft_putchar((second % 10) + 48);
			if (first != 98)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}
