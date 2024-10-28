/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:44:44 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/28 13:50:23 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned int nb)
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

int	ft_print_unsigned(unsigned int nb)
{
	int	len;

	len = 0;
	len += ft_nbrlen(nb);
	//ft_putnbr()
	return (len);
}
