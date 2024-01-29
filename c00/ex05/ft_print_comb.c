/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:31:16 by elikos            #+#    #+#             */
/*   Updated: 2024/01/29 02:05:54 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 7 && b == 8 && c == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int		first;
	int		second;
	int		third;

	first = 48;
	while (first <= 55)
	{
		second = first +1;
		while (first <= 56)
		{
			third = first + 1;
			while (first <= 57)
			{
				ft_putchar(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
