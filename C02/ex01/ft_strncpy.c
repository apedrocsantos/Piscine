/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:46:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/12 19:58:04 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p;

	p = dest;
	while (*src != '\0' && n)
	{
		*(dest++) = *(src++);
		n--;
	}
	while (n--)
	{
		*(dest++) = '\0';
	}
	return (p);
}
/*
int	main(void)
{
	char	dest[5];
	char	src[] = "totototo";
	int	size = 6;
	int	i = 0;

	ft_strncpy(dest, src, size);
	
	while(i < size)
	{
		printf("%c", dest[i++]);
	}
}*/
