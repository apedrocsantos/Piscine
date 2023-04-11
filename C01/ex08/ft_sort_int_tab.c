/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:46:14 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/10 09:50:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	i = 0;
	while (i + 1 < size)
	{
		while (tab[i] > tab[i + 1])
		{
			c = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = c;
			i--;
		}
		i++;
	}
}

int	main(void)
{
	int size = 8;
	int array[8] = {5, 6, 7, 7, 7, 8, 1, 2};
	int	i = 0;

	ft_sort_int_tab(array, size);
	
	while (i < size)
	{
		printf( "%i ",  array[i]);
		i++;
	}
}
