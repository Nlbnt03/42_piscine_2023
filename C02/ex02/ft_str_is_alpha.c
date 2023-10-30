/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:26:52 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/24 17:31:13 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			i++;
			a++;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
		{
			i++;
			a++;
		}
		else
		{
			return (0);
		}
	}
	if (i == a)
		return (1);
	return (1);
}
