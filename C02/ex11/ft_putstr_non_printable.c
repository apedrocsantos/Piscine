/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 09:54:13 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/13 10:34:19 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_arr[7] = {"\\07", "\\08", "\\09", "\\0a", "\\0b", "\\0c", "\\0d"};

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		a;
	char	*b;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (a >= 7 && a <= 13)
		{
			b = g_arr[a - 7];
			write(1, b, 3);
		}
		else
			write (1, &a, 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Ola\nesta bem?");
}*/
