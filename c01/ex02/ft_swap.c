/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:45:04 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 12:40:34 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}
/*
int	main(void)
{
	int	a = 1;
	int	b = 2;
	printf("Before: a was %d and b was %d.\n", a, b);
	ft_swap(&a, &b);
	printf("After: a is %d and b is %d. \n", a, b);
	return (0);
}
*/
