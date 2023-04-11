/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 16:16:38 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/16 09:46:04 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int array[], int pos)
{
	while (pos >= 0)
	{
		write (1, &array[pos], 1);
		pos--;
	}
}

void	ft_putnbr(int i)
{
	int	array[10];
	int	pos;

	pos = 0;
	if (i == 0)
		write (1, "0", 1);
	else if (i == -2147483648)
		write (1, "-2147483648", 11);
	else if (i < 0)
	{
		write (1, "-", 1);
		i = -i;
	}
	while (i >= 1)
	{
		array[pos] = ((i % 10) + 48);
		i = i / 10;
		pos ++;
	}
	pos--;
	ft_write(array, pos);
}
