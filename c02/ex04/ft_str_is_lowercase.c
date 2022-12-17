/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:02:56 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 16:03:28 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'z' || str[i] < 'a')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main (void)
{
	char string1[] = "asd";
	char string2[] = "asd123";
	char string3[] = "";
	printf("The return value of string1 is: %d. \n", ft_str_is_lowercase(string1));
	printf("The return value of string2 is: %d. \n", ft_str_is_lowercase(string2));
	printf("The return value of string3 is: %d. \n", ft_str_is_lowercase(string3));
	return 0;
}
*/
