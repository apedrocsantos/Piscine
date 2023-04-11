/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:27:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 10:09:02 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_find_index(char c, char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (c == *str)
		{
			return (i + 1);
		}
		i++;
		str++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		basenumber;
	long	result;

	sign = 1;
	basenumber = 0;
	result = 0;
	if (ft_check_base(base))
	{
		while (base[basenumber])
			basenumber++;
		while (ft_isspace(*str))
			str++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign *= -1;
			str++;
		}
		while (ft_find_index(*str, base))
			result = result * basenumber + (ft_find_index(*str++, base) - 1);
	}
	return (result * sign);
}

#include <stdio.h>
int	main(void)
{
	char	str[] = "   ++-1011567ipeyiinnighsadkjhdsf+yy-";
	char	base[] = "567";

	printf("%d", ft_atoi_base(str, base));
}
