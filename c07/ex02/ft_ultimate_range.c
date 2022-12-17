/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:30:21 by wexu              #+#    #+#             */
/*   Updated: 2022/12/13 11:33:24 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	sub;
	int	*arr;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	sub = max - min;
	arr = (int *) malloc(sizeof(int) * (sub));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	size = 0;
	while (max > min)
	{
		arr[size] = min;
		min++;
		size++;
	}
	return (size);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	size;
	int	i;
	
	i = 0;
	min = -1;
	max = 7;
	size = ft_ultimate_range(&arr, min, max);
	while(i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	return (0);
}
*/