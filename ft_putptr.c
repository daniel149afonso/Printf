/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:57:39 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/23 20:56:17 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_put_ptr();

int	ft_putptr(void *ptr)
{
    int len;

    len = 0;
    len += write(1, "0x", 2);
    if (ptr == 0)
        len += write(1, "0", 1);
    else
    {
        ft_put_ptr()
    }
}
