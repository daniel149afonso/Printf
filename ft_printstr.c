/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:53:17 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/26 17:36:11 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
		i++;
	write(1, s, i);
	return (ft_strlen_v2(s));
}

/*int	main(void)
{
	ft_putstr_fd("Winterfel", 1);
	return (0);
}*/
