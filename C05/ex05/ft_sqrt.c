/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:56:58 by ynalbant          #+#    #+#             */
/*   Updated: 2023/08/02 16:25:52 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	n = nb;
	i = 1;
	while (i * i <= n)
	{
		if (i * i == n)
			return (i);
		else
			i++;
	}
	return (0);
}
