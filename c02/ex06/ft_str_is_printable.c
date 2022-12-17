/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:04:52 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 16:05:24 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char string1[] = "A printable string.";
	char string2[] = "试试看这个中文吧";
	char string3[] = "";

	printf("The return value of string1 is %d.\n", ft_str_is_printable(string1));
	printf("The return value of string2 is %d.\n", ft_str_is_printable(string2));
	printf("The return value of string3 is %d.\n", ft_str_is_printable(string3));
	return 0;
}
*/