/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:14:52 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/18 12:25:58 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (i > 0)
	{	
		while (i > 0)
		{
			write (1, argv[i], ft_strlen(argv[i]));
			write (1, "\n", 1);
			i--;
		}
	}
	return (0);
}
