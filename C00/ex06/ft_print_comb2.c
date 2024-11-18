/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 23:31:21 by laugusto          #+#    #+#             */
/*   Updated: 2024/11/17 23:45:00 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2_checker(int a, int b)
{
	if (a != 98 || b != 99)
		write(1, ", ", 2);
}

void	ft_mini_putnbr(int n)
{
	char	c;

	c = n / 10 + '0';
	write(1, &c, 1);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_mini_putnbr(i);
			write(1, " ", 1);
			ft_mini_putnbr(j);
			ft_print_comb2_checker(i, j);
			j++;
		}
		i++;
	}
}
