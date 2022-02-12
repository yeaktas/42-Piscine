/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:23:07 by aakkaya           #+#    #+#             */
/*   Updated: 2021/12/01 18:48:38 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	yb;
	int	ob;
	int	bb;

	yb = 0;
	while (yb <= 7)
	{
		ob = yb + 1;
		while (ob <= 8)
		{
			bb = ob + 1;
			while (bb <= 9)
			{
				ft_putchar(48 + yb);
				ft_putchar(48 + ob);
				ft_putchar(48 + bb);
				if (yb != 7)
					write(1, ", ", 2);
				bb++;
			}
			ob++;
		}
		yb++;
	}
}
