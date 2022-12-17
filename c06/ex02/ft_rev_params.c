/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:45:30 by wexu              #+#    #+#             */
/*   Updated: 2022/12/10 17:45:34 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc - 1;
	y = 0;
	while (x > 0)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			write(1, &argv[x][y], 1);
			y++;
		}
		x--;
		write(1, "\n", 1);
	}
	return (0);
}