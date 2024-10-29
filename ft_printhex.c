/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:46:05 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/29 15:23:30 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lower_upper(unsigned int nb, int upper, int len)
{
	char	c;

	if (upper)
		c = (nb - 10) + 'A';
	else
		c = (nb - 10) + 'a';
	len += write(1, &c, 1);
	return (len);
}

void	ft_convert_hex(unsigned int nb, int upper, int len)
{
	char	c;

	if (nb >= 16)
	{
		ft_convert_hex(nb / 16, upper, len);
		ft_convert_hex(nb % 16, upper, len);
	}
	else if (nb <= 15 && nb >= 10)
	{
		ft_lower_upper(nb, upper, len);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

int	ft_printhex(unsigned int nb, char c)
{
	int	len;
	int	is_upper;

	len = 0;
	is_upper = 0;
	if (nb == 0)
	{
		len += write(1, "0", 1);
	}
	else
	{
		if (c == 'X')
			is_upper = 1;
		ft_convert_hex(nb, is_upper, len);
	}
	return (len);
}
//BUT: affiche un decimal en hexa et retourne sa taille(en hexa).
