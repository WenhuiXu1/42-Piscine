/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:25:37 by wexu              #+#    #+#             */
/*   Updated: 2022/12/04 16:25:59 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (s1[i] == s2[i]) && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<string.h>
int	main (void)
{
	char *s1 ,*s2 ,*s3;

	char a[] = "the";
	char b[] = "tteir";
	char c[] = "";

	s1 = a;
	s2 = b;
	s3 = c;

	int n = 1;

	printf("Result from library: %d\n", strncmp(s1, s2, n));
	printf("Result from my function: %d\n", ft_strncmp(s1, s2, n));

	printf("Result from library: %d\n", strncmp(s2, s3, n));
	printf("Result from my function: %d\n", ft_strncmp(s2, s3, n));
	
	return 0;
}
*/