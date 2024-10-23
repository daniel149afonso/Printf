/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:43:21 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/23 19:07:52 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>//macros variables
# include <stdio.h>
# include <unistd.h>

int	ft_putstr_v2(char *s);
int	ft_strlen_v2(char *str);
int	ft_putptr(void *ptr);

#endif
