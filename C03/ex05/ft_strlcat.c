/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:36:49 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/14 12:13:02 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	i = 0;
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	while (*dest && size > 0)
	{
		i++;
		dest++;
	}
	while (*src && i < size - 1)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	if (size < dest_size)
		return (src_size + size);
	else
		return (dest_size + size);
}
/*
int	main(void)
{
	char	dest[] = "abc";
	char	src[] = "efgh";
	int	size = 7;
	char	buffer[size];

	strcpy(buffer, dest);
	printf("%d\n", ft_strlcat(buffer, src, size));
	printf("%s", buffer);

}*/
