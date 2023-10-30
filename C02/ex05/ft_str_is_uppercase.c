/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:28:53 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/24 15:32:58 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			i++;
			j++;
		}
		else
		{
			return (0);
		}
	}
	if (i == j)
	{
		return (1);
	}
	return (1);
}
