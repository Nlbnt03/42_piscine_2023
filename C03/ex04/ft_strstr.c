/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:32:38 by ynalbant          #+#    #+#             */
/*   Updated: 2023/08/03 15:32:40 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			i++;
			j++;
		}
		else if (to_find[j] == '\0')
		{
			return (&str[i - j]);
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (0);
}
