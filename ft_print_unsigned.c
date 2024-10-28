/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:44:44 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/28 16:28:57 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_len(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
	{
		count++;
		return (count);
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_put_unsigned(unsigned int n)
{
	if (n > 9)
	{
		ft_print_unsigned(n / 10);
		ft_print_unsigned(n % 10);
	}
	else
	{
		n += '0';
		write(1, &n, 1);
	}
}

int	ft_print_unsigned(unsigned int nb)
{
	int	len;

	len = 0;
	len += ft_unsigned_len(nb);
	ft_put_unsigned(nb);
	return (len);
}
//BUT: affiche un entier non signé et retourne sa taille.