/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anda-cun <anda-cun@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:00:41 by anda-cun          #+#    #+#             */
/*   Updated: 2023/03/18 14:48:51 by anda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (i < nb)
		{
			result = result * (nb - i);
			i++;
		}
		return (result);
	}
}
