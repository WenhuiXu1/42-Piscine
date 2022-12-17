/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:43:09 by wexu              #+#    #+#             */
/*   Updated: 2022/12/07 13:43:52 by wexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	for_write(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		for_write('-');
		for_write('2');
		ft_putnbr(147483648);
	}
	if (nb < 0 && nb != -2147483648)
	{
		for_write('-');
		ft_putnbr(-nb);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		for_write(nb + 48);
	}
}
/*
int	main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = -2147483648;
	int num4 = 4567;

	ft_putnbr(num1);
	for_write('\n');
	ft_putnbr(num2);
	for_write('\n');
	ft_putnbr(num3);
	for_write('\n');
	ft_putnbr(num4);

	return 0;
}
*/