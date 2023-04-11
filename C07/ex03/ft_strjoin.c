/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:01:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/22 17:22:05 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*str_create(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	while (i < size)
	{
		k = 0;
		while (strs[j][k])
			str[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && i < size)
			str[i++] = sep[k++];
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		strs_size;
	int		sep_size;
	int		fullsize;
	int		i;

	strs_size = 0;
	i = 0;
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		return (str);
	}
	while (strs[i])
		strs_size += ft_strlen(strs[i++]);
	sep_size = ft_strlen(sep);
	fullsize = strs_size + (size - 1) * sep_size;
	str = str_create(fullsize, strs, sep);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"abc", "def", "ghi", "o", "aaaaaeee", "ggggf fff", "a"};
	char	*sep = "---, ";
	int	size = 7;

	printf("%s", ft_strjoin(size, strs, sep));
}*/
