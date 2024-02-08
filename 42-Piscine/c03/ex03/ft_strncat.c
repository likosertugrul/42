/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 17:46:28 by elikos            #+#    #+#             */
/*   Updated: 2024/02/07 18:52:53 by elikos           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				length;
	unsigned int	i;

	length = ft_strlen(dest);
	i = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while ((src[i] != 0) && (i < nb))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = 0;
	return (dest);
}
