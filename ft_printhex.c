/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:46:05 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/28 15:06:07 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lower_upper(unsigned int nb, int upper)
{
	char	c;

	if (upper)
	{
		c = (nb - 10) + 'A';
		write(1, &c, 1);
	}
	else
	{
		c = (nb - 10) + 'a';
		write(1, &c, 1);
	}
}

int	ft_hexlen(unsigned int nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

void	ft_convert_hex(unsigned int nb, int upper)
{
	char	c;

	if (nb >= 16)
	{
		ft_convert_hex(nb / 16, upper);
		ft_convert_hex(nb % 16, upper);
	}
	else if (nb <= 15 && nb >= 10)
	{
		ft_lower_upper(nb, upper);
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
		len = ft_hexlen(nb);
		if (c == 'X')
			is_upper = 1;
		ft_convert_hex(nb, is_upper);
	}
	return (len);
}
//BUT: affiche un decimal en hexa et retourne sa taille(decimal).