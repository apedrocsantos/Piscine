/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:38:23 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/12 19:12:18 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_str_is_printable(""));
	printf("%i\n", ft_str_is_printable("iasd"));
	printf("%i\n", ft_str_is_printable(""));
}*/
