/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:29:36 by wexu              #+#    #+#             */
/*   Updated: 2022/12/13 11:32:18 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	sub;
	int	*arr;

	if (min >= max)
	{	
		return (0);
	}
	sub = max - min;
	arr = (int *)malloc(sizeof(int) * (sub));
	if (arr == NULL)
	{
		return (NULL);
	}
	sub = 0;
	while (max > min)
	{
		arr[sub] = min;
		min++;
		sub++;
	}
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i = 0;
	int	sub;
	min = -2;
	max = 6;
	sub = max - min;
	arr = ft_range(min, max);
	while(i < sub)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
*/