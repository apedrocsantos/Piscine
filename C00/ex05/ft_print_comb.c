/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:34:02 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/06 12:21:35 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c, int d, int u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (c < 55)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	d = '1';
	u = '2';
	while (u <= '9')
	{
		ft_putchar(c, d, u);
		u++;
		if (u > '9')
		{
			d++;
			if (d > '8')
			{
				c++;
				d = c + 1;
			}
			u = d + 1;
		}
	}
}
