/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:26:23 by wexu              #+#    #+#             */
/*   Updated: 2022/12/04 16:26:58 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main(void)
{
	char	*a, *b;

	char A[] = "Hello";
	char B[] = " World!";

	a = A;
	b = B;

	printf("%s\n", ft_strcat(a, b));	
	return 0;
}
*/