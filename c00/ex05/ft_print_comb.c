/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:24:34 by elikos            #+#    #+#             */
/*   Updated: 2024/01/29 09:53:19 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 55 && b == 56 && c == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 48;
	while (first <= 55)
	{
		second = first + 1;
		while (second <= 56)
		{
			third = second + 1;
			while (third <= 57)
			{
				ft_putchar(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
