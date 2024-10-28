/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:27:16 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/28 15:09:18 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

void	ft_putnbr(int n)
{
	char	neg;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		neg = '-';
		write(1, &neg, 1);
		n = -n;
		ft_putnbr(n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
}

int	ft_printnbr(int nb)
{
	int	len;

	len = 0;
	len = ft_nbrlen(nb);
	ft_putnbr(nb);
	return (len);
}
//BUT: affiche un entier et retourne sa taille.