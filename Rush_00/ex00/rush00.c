/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttuzun <ttuzun@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:24:10 by ttuzun            #+#    #+#             */
/*   Updated: 2021/11/28 18:26:50 by yaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	satr;
	int	sutn;

	sutn = 1;
	while (sutn <= y && x > 0)
	{
		satr = 1;
		while (satr <= x)
		{
			if ((satr != 1 && satr != x) && (sutn == 1 || sutn == y))
				ft_putchar('-');
			else if ((sutn != 1 && sutn != y) && (satr == 1 || satr == x))
				ft_putchar('|');
			else if ((satr == 1) || (satr == x) || (sutn == 1) || (sutn == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			satr++;
		}
		ft_putchar('\n');
		sutn++;
	}
}
