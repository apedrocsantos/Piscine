/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:46:14 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/10 08:22:36 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab();

int	main(void)
{
	int size = 9;
	int array[9] = {90, 8, 88, 91, 1, 0, 8, 1, 134};
	int	i = 0;

	ft_sort_int_tab(array, size);
	
	while (i < size)
	{
		printf( "%i ",  array[i]);
		i++;
	}
}
