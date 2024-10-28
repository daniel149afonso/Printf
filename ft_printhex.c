/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:46:05 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/28 17:55:34 by daafonso         ###   ########.fr       */
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

int	ft_convert_hex(unsigned int nb, int upper, int len)
{
	char	c;

	if (nb >= 16)
	{
		len = ft_convert_hex(nb / 16, upper, len);
		len = ft_convert_hex(nb % 16, upper, len);
	}
	else if (nb <= 15 && nb >= 10)
	{
		len += ft_lower_upper(nb, upper, len);
	}
	else
	{
		c = nb + '0';
		len += write(1, &c, 1);
	}
	return (len);
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
		len = ft_convert_hex(nb, is_upper, len);
	}
	return (len);
}
//BUT: affiche un decimal en hexa et retourne sa taille(en hexa).