/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:03:55 by elikos            #+#    #+#             */
/*   Updated: 2024/01/26 05:18:53 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_comb(void)
{
    int first, second, third;
    first = 0;
    while (first <= 7) {
        second = first +1;
        while (second <= 8) {
            third = second + 1;
            while (third <= 9) {
                char digit_1 = 48 + first;
                char digit_2 = 48 + second;
                char digit_3 = 48 + third;
                write(1, &digit_1, 1);
                write(1, &digit_2, 1);
                write(1, &digit_3, 1);
                write(1, " ,", 2); // Write a comma and space between digits
                third++;
            }
			
            second++;
        }
        first++;
    }
}
int main(void)
{
    ft_print_comb();
    return 0;
}