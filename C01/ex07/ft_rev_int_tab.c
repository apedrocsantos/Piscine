/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:22:03 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/09 15:09:03 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (i < size / 2)
	{
		c = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = c;
		i++;
	}
}
/*

int	main(void)
{
	int size;
	int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	i;

	size = 10;
	i = 0;

	ft_rev_int_tab(array, size);

	while (i < size)
	{
		printf("%i, ", array[i]);
		i++;
	}
}*/
