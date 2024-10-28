/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:13 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/28 13:51:17 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

size_t	find_format(va_list args, char format)
{
	size_t	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	// else if (format == 'd' || format == 'i')
	// {

	// }
	else if (format == 'u')
	{
		len += ft_print_unsigned(va_arg(args, unsigned int));
	}
	else if (format == 'x' || format == 'X')
	{
		len += ft_printhex(va_arg(args, unsigned int), format);
	}
	else if (format == '%')
	{
		len += ft_printchar('%');
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += find_format(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	ft_printchar('\n');
	va_end(args);
	return (len);
}

int	main(void)
{
	int		nb;
	int		result;

	nb = 14302;
	result = ft_printf("Your output: %x", nb);
	printf("Length: %d\n", result);
	printf("%x\n", nb);
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
Permet d'extraire le paramètre suivant.

va_end(args):
Nettoie la mémoire et termine la gestion de la liste d'arguments
*/
