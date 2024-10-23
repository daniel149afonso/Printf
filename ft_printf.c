/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:13 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/23 15:43:01 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_v2(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	find_format(va_list args, char format)
{
	size_t	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_v2(va_arg(args, int));
	// else if (format == 's')
	// {

	// }
	// else if (format == 'p')
	// {

	// }
	// else if (format == 'd' || format == 'i')
	// {

	// }
	// else if (format == 'p')
	// {

	// }
	// else if (format == 'x' || format == 'X')
	// {

	// }
	return (0);
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
			len += find_format(args, str[i + 1]);
		}
		//write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	c;

	c = 'A';
	ft_printf("Hello: %c", c);
	return (0);
}
/*
va_list args:
C'est un type de variable qui représente la liste des arguments.
Elle est utilisée pour stocker et gérer les arguments variables au sein de la fonction

va_start(va_list ap, last):
Cette macro initialise la variable ap (de type va_list) pour commencer à lire les arguments.
Le paramètre last représente le dernier argument fixe de la fonction, c'est-à-dire l'argument qui précède les arguments variables.

va_arg( aVaList, parameterType):
permet d'extraire le paramètre suivant.
*/
