/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:02:04 by wexu              #+#    #+#             */
/*   Updated: 2022/11/30 16:02:24 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
	char	num[] = "0123456789";
	char	notnum[] = "0123456789k";
	char	empty[] = "";
	
	printf("num return is %d\n", ft_str_is_numeric(num));
	printf("nonum return is %d\n", ft_str_is_numeric(notnum));
	printf("empty return is %d\n", ft_str_is_numeric(empty));
	return 0;
}
*/