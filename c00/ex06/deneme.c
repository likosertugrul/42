/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:03:55 by elikos            #+#    #+#             */
/*   Updated: 2024/01/26 04:12:19 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_comb(void)
{
    int first, second;
        second = first +1;
        while (second <= 9) {
            second = first + 1;
            while (second <= 9) {
                char digit_1 = '0' + first;
                char digit_2 = '0' + second;
                write(1, &digit_1, 1);
                write(1, &digit_2, 1);
                write(1, " ,", 2); // Write a comma and space between digits
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