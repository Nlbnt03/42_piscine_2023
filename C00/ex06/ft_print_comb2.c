/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:03:31 by ynalbant          #+#    #+#             */
/*   Updated: 2023/07/14 19:03:32 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	number1;
	char	number2;

	number1 = 0;
	number2 = 0;
	while (number1 <= 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			ft_putchar(number1 / 10 + '0');
			ft_putchar(number1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(number2 / 10 + '0');
			ft_putchar(number2 % 10 + '0');
			if (number1 != 98)
			{
				write(1, ", ", 2);
			}
			number2++;
		}
		number1++;
	}
}
