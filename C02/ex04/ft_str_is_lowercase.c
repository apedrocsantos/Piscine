/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:38:23 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/12 15:30:06 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (!(*str >= 97 && *str <= 122))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("aaa"));
	printf("%i", ft_str_is_lowercase("aAa"));
}*/
