/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:52:42 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 08:47:25 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*a;
	char	*b;
	int	size;

	a = "AA";
	b = "AD";
	size = 2;
	printf("test value is %d\n", strncmp(a, b, size));
	printf("%d\n", ft_strncmp(a, b, size));
}*/
