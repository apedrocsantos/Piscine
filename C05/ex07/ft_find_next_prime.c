/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:06:57 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/21 10:48:07 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(569613312));
}
*/
