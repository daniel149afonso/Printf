/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:57:39 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/29 16:25:03 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long long ptr)
{
	int	count;

	count = 0;
	while (ptr != 0)
	{
		ptr = ptr / 16;
		count++;
	}
	return (count);
}

void	ft_put_ptr(unsigned long long ptr)
{
	char	c;

	if (ptr >= 16)
	{
		ft_put_ptr(ptr / 16);
		ft_put_ptr(ptr % 16);
	}
	else if (ptr >= 10 && ptr <= 15)
	{
		c = ptr - 10 + 'a';
		write(1, &c, 1);
	}
	else
	{
		c = ptr + '0';
		write(1, &c, 1);
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}
//BUT: Afficher une adresse memoire en hexadecimal
//uintptr = un entier non signé pour stocker les adresses memoires
//num = decimal (ex: 12394)
//num = num / ou % 16 : conversion decimal en hexadecimal
//si num est entre 15 et 10 on convertit en char et l'affiche en hexa
//sinon on convertit en char et on affiche le chiffre
