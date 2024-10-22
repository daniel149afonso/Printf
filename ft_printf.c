/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:13 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/22 17:13:49 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	find_format(char *str, size_t i)
{
	if (str[++i] == 'c')
	{

	}
	else if (str[++i] == 's')
	{

	}
	else if (str[++i] == 'p')
	{

	}
	else if (str[++i] == 'd' || str[++i] == 'i')
	{

	}
	else if (str[++i] == 'p')
	{

	}
	else if (str[++i] == 'x' || str[++i] == 'X')
	{

	}
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{

		}
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("Hello");
	return (0);
}
/*
va_list:
C'est une variable spéciale qui représente la liste des arguments.
Elle est utilisée pour stocker et gérer les arguments variables au sein de la fonction
va_start(va_list ap, last):
Cette macro initialise la variable ap (de type va_list) pour commencer à lire les arguments.
Le paramètre last représente le dernier argument fixe de la fonction, c'est-à-dire l'argument qui précède les arguments variables.
*/
