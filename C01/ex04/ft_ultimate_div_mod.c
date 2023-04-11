/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:15:44 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/09 14:17:10 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}
/*
int	main(void)
{
	int	c;
	int	d;
	int *a;
	int *b;

	c = 10;
	d = 3;
	a = &c;
	b = &d;

	printf("%i, %i\n", c, d);
	ft_ultimate_div_mod(a, b);
	printf("%i, %i", c, d);
}*/
