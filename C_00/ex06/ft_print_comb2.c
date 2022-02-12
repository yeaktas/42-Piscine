/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaktas <yaktas@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:21:12 by yaktas            #+#    #+#             */
/*   Updated: 2021/11/30 18:36:56 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 1;
	while (left <= 98)
	{
		right = left + 1;
		while (right <= 99)
		{
			ft_putchar((left / 10) + 48);
			ft_putchar((left % 10) + 48);
			write(1, " ", 1);
			ft_putchar((right / 10) + '0');
			ft_putchar((right % 10) + '0');
			if (left != 98 || right != 99)
			{
				write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}
}
