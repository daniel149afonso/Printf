/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:43:21 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/26 17:37:13 by daniel149af      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>//macros variables
# include <stdio.h>
# include <unistd.h>

int	ft_printstr(char *s);
int	ft_strlen_v2(char *str);
int	ft_printptr(unsigned long long ptr);
int	ft_printhex(unsigned int nb, char c);

#endif
