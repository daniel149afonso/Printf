/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:53:17 by daafonso          #+#    #+#             */
/*   Updated: 2024/10/29 16:23:52 by daafonso         ###   ########.fr       */
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
//BUT: affiche un string avec len de retour