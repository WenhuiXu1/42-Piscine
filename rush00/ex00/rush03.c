/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcanete <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:50:16 by vcanete           #+#    #+#             */
/*   Updated: 2022/11/27 17:34:19 by chmurphy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_line(int r, int cx, int rx);

void	rush03(int cx, int rx)
{
	int	r;

	r = 0;
	while (r < rx)
	{
		print_line (r, cx, rx);
		ft_putchar('\n');
		r++;
	}
}

void	print_line(int r, int cx, int rx)
{
	int	c;

	c = 0;
	while (c < cx)
	{
		if ((c == 0 && r == 0) || (c == 0 && r == rx - 1))
		{
			ft_putchar('A');
		}
		else if ((c == cx - 1 && r == 0) || (c == cx - 1 && r == rx - 1))
		{
			ft_putchar('C');
		}
		else if ((c > 0) && (c < cx - 1) && (r > 0) && (r < rx - 1))
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
		c++;
	}
}
