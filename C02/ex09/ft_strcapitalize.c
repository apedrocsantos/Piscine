/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:38:23 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/14 11:49:18 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isuppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int	ft_isalpha(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

int	ft_issmallcase(char str)
{
	if (str >= 97 && str <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_issmallcase(str[0]) == 1)
	{
		str[0] -= 32;
	}
	while (str[i + 1] != '\0')
	{
		if (ft_isuppercase(str[i + 1]))
			str[i + 1] += 32;
		if (ft_isalpha(str[i]) == 0 && ft_issmallcase(str[i + 1]) == 1)
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	c[] = "olA, tuDo bem? 42pal@vras quarenta-e-duas; cinquenta+E+um";

	printf("%s\n", ft_strcapitalize(c));
}
