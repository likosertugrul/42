/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:17:18 by elikos            #+#    #+#             */
/*   Updated: 2024/02/03 18:20:15 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	num;
	int	*ptr8;
	int	**ptr7;
	int	***ptr6;
	int	****ptr5;
	int	*****ptr4;
	int	******ptr3;
	int	*******ptr2;
	int	********ptr1;
	int	*********ptr0;

	num;
	
	num = 5;
	ptr8 = &num;
	ptr7 = &ptr8;
	ptr6 = &ptr7;
	ptr5 = &ptr6;
	ptr4 = &ptr5;
	ptr3 = &ptr4;
	ptr2 = &ptr3;
	ptr1 = &ptr2;
	ptr0 = &ptr1;

	printf("first %d", num);
	ft_ultimate_ft(ptr0);
	printf("last%d", num);
}