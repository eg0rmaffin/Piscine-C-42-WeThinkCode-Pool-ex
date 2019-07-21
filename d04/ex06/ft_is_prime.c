/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 23:11:05 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/06 23:27:27 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int run;

	run = 2;
	if ((nb == 0) || (nb == 1) || (nb < 0))
	{
		return (0);
	}
	while (run < nb)
	{
		if (nb % run == 0)
		{
			return (0);
		}
		z++;
	}
	return (1);
}