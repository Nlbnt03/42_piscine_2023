/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:07:30 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/24 17:14:35 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (j == 1)
				str[i] = str[i] - 32;
			j = 0;
		}
		else if (str[i] <= '9' && str[i] >= '0')
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
