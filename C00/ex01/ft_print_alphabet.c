/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:38:39 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/28 14:50:24 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*alpha;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	write(1, alpha, 27);
}

/*
int	main(void)
{
	ft_print_alphabet();
}
*/