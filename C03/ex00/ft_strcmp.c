/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:52:42 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/14 17:03:26 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char	*a;
	char	*b;

	a = "Oh hi thi";
	b = "Ohh";
	printf("test value is %d\n", strcmp(a, b));
	printf("%d\n", ft_strcmp(a, b));
}*/
