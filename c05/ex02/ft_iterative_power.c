/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:15:36 by wexu              #+#    #+#             */
/*   Updated: 2022/12/12 15:38:44 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
/*
#include<stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(2, 5));
	return (0);
}
*/
