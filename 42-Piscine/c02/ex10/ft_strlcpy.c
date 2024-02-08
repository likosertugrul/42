/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 04:56:11 by elikos            #+#    #+#             */
/*   Updated: 2024/02/06 16:59:43 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_length;

	src_length = ft_strlen(src);
	i = 0;
	while (src[i] != 0 && (i < (size -1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (src_length);
}
