/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:59:32 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/24 15:05:19 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			i++;
			a++;
		}
		else
		{
			return (0);
		}
	}
	if (a == i)
	{
		return (1);
	}
	return (1);
}
