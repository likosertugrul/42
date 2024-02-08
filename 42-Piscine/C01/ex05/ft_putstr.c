/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftputstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:30:04 by elikos            #+#    #+#             */
/*   Updated: 2024/02/03 18:31:33 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr("agasfgadgdafgdsfgsdgfsdg");
}
