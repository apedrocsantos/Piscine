/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:14:09 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 08:44:30 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = str;
		j = to_find;
		while (*i == *j && *i != '\0')
		{
			i++;
			j++;
			if (*j == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Telha Pinvited us to 2020 Pizza this weekend";
	char	to_find[] = "o";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str, to_find));
}*/
