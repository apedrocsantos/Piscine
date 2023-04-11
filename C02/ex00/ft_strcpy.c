/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 08:49:23 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/13 08:56:13 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (i)
	{
		*dest = *src;
		if (*src == '\0')
			break ;
		dest++;
		src++;
	}
	return (i);
}
/*
int	main(void)
{
	char	src[] = "testeme";
	char	dest[7];

	printf("%s", ft_strcpy(dest, src));
}*/
