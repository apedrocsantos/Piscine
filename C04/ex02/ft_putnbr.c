/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:06:47 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/16 18:50:07 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_nbr(int nb)
{
	if (nb == 0)
	{
		write (1, "0", 1);
		return (0);
	}
	else if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	int	arr[10];
	int	i;

	i = 0;
	if (ft_check_nbr(nb))
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= -1;
		}
		while (nb)
		{
			arr[i] = (nb % 10) + '0';
			nb /= 10;
			if (nb > 0)
				i++;
		}
		while (i >= 0)
		{
			write (1, &arr[i], 1);
			i--;
		}
	}
}
/*
int	main(void)
{
	ft_putnbr(-2147483647);
}*/
