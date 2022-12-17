/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:54:29 by wexu              #+#    #+#             */
/*   Updated: 2022/12/06 16:54:59 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include<string.h>
#include<stdio.h>
int	main(void)
{
	char	*str;
	char a[30] = "123456789";
	str = a;


	printf("The result from the library function is: %lu\n", strlen(str));
	printf("The result from my function is: %d\n", ft_strlen(str));
	return 0;
}
*/