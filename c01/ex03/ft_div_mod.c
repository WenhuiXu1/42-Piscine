/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:54:51 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 12:19:34 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include<stdio.h>
int	main(void)
{
	int	div;
	int	mod;
	ft_div_mod(5, 2, &div, &mod);
	printf("div is %i\nmod is %i\n", div, mod);
	return 0;
}
*/
