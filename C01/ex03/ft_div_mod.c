/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:42:29 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/09 14:15:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int c;
	int d;
	int	*div;
	int	*mod;

	a = 48;
	b = 15;
	div = &c;
	mod = &d;

	ft_div_mod(a, b, div, mod);
	printf("%i %i %i %i", a, b, *div, *mod);
}*/
