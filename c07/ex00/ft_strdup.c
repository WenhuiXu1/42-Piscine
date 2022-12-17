/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:29:11 by wexu              #+#    #+#             */
/*   Updated: 2022/12/13 11:32:50 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*arr;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
/*
int main(void)
{
    char    *s1;
    char    *s2;
    s1 = "Green eggs and ham.";
    s2 = ft_strdup(s1);
    printf("%s\n", s2);
}
*/