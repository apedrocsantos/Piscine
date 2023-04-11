/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:32:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/09 15:10:38 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int*b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 'a';
	b = 'b';
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}*/