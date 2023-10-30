/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:56:47 by ynalbant          #+#    #+#             */
/*   Updated: 2023/08/02 16:23:17 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	else if (power == 0)
		return (1);
	else if (nb == 0 || power < 0)
		return (0);
	else if (power > 0)
	{
		if (nb > 2147483647)
			return (0);
		else
			return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
