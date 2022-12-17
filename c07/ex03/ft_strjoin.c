/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:30:44 by wexu              #+#    #+#             */
/*   Updated: 2022/12/13 11:34:03 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_strslen(char *str[])
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (*str[i])
	{
		j = 0;
		while (str[i][j])
		{
			j++;
			c++;
		}
		i++;
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		c;

	arr = malloc(ft_strslen(strs) + ft_strlen(sep) * (size - 1));
	i = 0;
	j = 0;
	while (i < size)
	{
		c = 0;
		while (strs[i][c] != '\0')
		{
			arr[j++] = strs[i][c++];
		}
		c = 0;
		while (sep[c] != '\0' && i != size - 1)
		{
			arr[j++] = sep[c++];
		}
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
/*
int	main(void)
{
	char	*arr[4];

	arr[0] = "a";
	arr[1] = "bb";
	arr[2] = "ccc";
	arr[3] = "dddd";
	printf("%s", ft_strjoin(4, arr, "  sep  "));
	return (0);
}
*/