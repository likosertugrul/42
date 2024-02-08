/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elikos <elikos@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:10:43 by elikos            #+#    #+#             */
/*   Updated: 2024/02/06 16:58:57 by elikos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_struppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (i == 0)
		{
			ft_struppercase(&str[0]);
		}
		else if ((str[i] == ' ') || (str[i] >= 123)
			|| (str[i] <= 47) || ((str[i] <= 64) && (str[i] >= 57)))
		{
			ft_struppercase(&str[i + 1]);
		}
		else if ((str[1] >= 65) && (str[1] <= 90))
		{
			ft_strlowercase(&str[1]);
		}
		else if (str[i] != ' ')
		{
			ft_strlowercase(&str[i + 1]);
		}
		i++;
	}
	return (str);
}
