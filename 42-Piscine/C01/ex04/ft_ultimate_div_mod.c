/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:28:41 by elikos            #+#    #+#             */
/*   Updated: 2024/02/03 18:29:24 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	first;
	int	second;

	first = 217;
	second = 10;
	printf("first is %d, second is %d ", first, second);
	ft_ultimate_div_mod(&first, &second);
	printf("div is %d, mod is %d ", first, second);
}
