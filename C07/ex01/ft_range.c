/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:41:37 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 16:34:20 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		str = NULL;
		return (str);
	}
	else
	{
		size = max - min;
		str = (int *)malloc(sizeof(int) * (size + 1));
		if (str == NULL)
			return (NULL);
		while (min < max)
			str[i++] = min++;
		str[i] = '\0';
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int *str = ft_range(10, 20);

	i = 0;
	while (str[i] != '\0')
	{
		printf("%d\n", str[i]);
		i++;
	}
	return (0);
}*/
