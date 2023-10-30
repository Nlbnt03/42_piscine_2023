/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynalbant <ynalbant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:13:29 by ynalbant          #+#    #+#             */
/*   Updated: 2023/08/03 20:23:47 by ynalbant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	f;
	int	l;

	f = 1;
	l = 0;
	while (f <= argc - 1)
	{
		l = 0;
		while (argv[f][l])
		{
			write(1, &argv[f][l], 1);
			l++;
		}
		write(1, "\n", 1);
		f++;
	}
}
