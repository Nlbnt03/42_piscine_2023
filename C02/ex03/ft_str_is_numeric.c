/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 14:31:08 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/24 14:38:34 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			j++;
			i++;
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
