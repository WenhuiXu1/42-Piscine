/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:00:47 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 16:01:27 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{	
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main(void)
{
	char str1[] = "asngbJKJAF";
	char str2[] = "awdaf123";
	char str3[] = "";
	
	printf("The return value of str1 is: %d\n", ft_str_is_alpha(str1));
	printf("The return value of str2 is: %d\n", ft_str_is_alpha(str2));
	printf("The return value of str3 is: %d\n", ft_str_is_alpha(str3));
	
	return 0;
}
*/