/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:24:29 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 10:08:18 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putchar(int nbr, char *base, int basenumber)
{
	long	nb;

	nb = nbr;
	if (nb < basenumber)
		write (1, &base[nb], 1);
	else
	{
		ft_putchar(nb / basenumber, base, basenumber);
		ft_putchar(nb % basenumber, base, basenumber);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basenumber;

	if (nbr > 2147483647 || nbr < -2147483648)
		printf("erro");
	basenumber = 0;
	if (ft_check_base(base))
	{
		while (base[basenumber])
			basenumber++;
		if (nbr < 0)
		{
			nbr *= -1;
			write (1, "-", 1);
		}
		ft_putchar(nbr, base, basenumber);
	}
}
/*
int	main(void)
{
	long	nb = -2147483647;
	char	base[] = "ponoeyvif";
	ft_putnbr_base(nb, base);
}*/
