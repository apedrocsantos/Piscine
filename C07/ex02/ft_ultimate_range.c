/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:41:37 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/23 20:17:27 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	int	*range;
	int	min = -10;
	int	max = 20;
	
	printf("size is %d\n", ft_ultimate_range(&range, min, max));
	i = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
