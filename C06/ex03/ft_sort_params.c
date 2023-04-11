/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:33:35 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/18 12:30:15 by anda-cun         ###   ########.fr       */
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

int	ft_compare_str(char *str1, char *str2)
{
	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_putstr(char *arr[])
{
	int	i;

	i = 1;
	while (arr[i])
	{
		write (1, arr[i], ft_strlen(arr[i]));
		write (1, "\n", 1);
		i++;
	}
}

void	ft_sort(char *argv[])
{
	int		i;
	char	*temp;

	i = 1;
	while (argv[i + 1])
	{
		if (ft_compare_str(argv[i], argv[i + 1]) > 0)
		{
			while (ft_compare_str(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = temp;
				if (i > 1)
					i--;
			}
		}
		i++;
	}
	ft_putstr(argv);
}

int	main(int argc, char *argv[])
{	
	if (argc > 1)
	{
		ft_sort(argv);
	}
	return (0);
}
