/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:42:29 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/10 08:10:34 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod();

int	main(void)
{
	int	a;
	int	b;
	int c;
	int d;
	int	*div;
	int	*mod;

	a = 50;
	b = 15;
	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	printf("%i %i %i %i", a, b, *div, *mod);
}
