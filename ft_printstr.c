/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_v2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:53:17 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/24 14:35:43 by daafonso         ###   ########.fr       */
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
