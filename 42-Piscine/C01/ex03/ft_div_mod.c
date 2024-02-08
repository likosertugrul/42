/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:24:39 by elikos            #+#    #+#             */
/*   Updated: 2024/02/03 18:28:27 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	first;
	int	second;
	int	bol;
	int	kal;

	first = 217;
	second = 10;
	printf("first %d, second %d", first, second);
	ft_div_mod(first, second, &bol, &kal);
	printf("div is %d second is %d", bol, kal);
}
