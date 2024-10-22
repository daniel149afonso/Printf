/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:28:13 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/22 13:58:37 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

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
}

int	ft_printf(const char *str)
{
	size_t	i;

	i = 0;
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
	ft_printf("Hello%d", );
	return (0);
}
