/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:27:23 by wexu              #+#    #+#             */
/*   Updated: 2022/12/04 16:27:52 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
//include<string.h>
int	main(void)
{
	char *d, *s;

	char a[50] = "abcdefg";
	char b[50] = "hijklmn";
	
	d = a;
	s = b;
	
	int nb= 3;
	
//	printf("%s\n", strncat(a, b, nb));
	printf("%s\n", ft_strncat(a, b, nb));

	return 0;
}
*/