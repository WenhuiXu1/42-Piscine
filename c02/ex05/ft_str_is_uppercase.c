/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:03:55 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 16:04:22 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char string1[] = "ASD";
	char string2[] = "ASD123";
	char string3[] = "";
	printf("The return value of string1 is: %d.\n", ft_str_is_uppercase(string1));
	printf("The return value of string2 is: %d.\n", ft_str_is_uppercase(string2));
	printf("The return value of string3 is: %d.\n", ft_str_is_uppercase(string3));
	return 0;
}
*/