/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daafonso <daafonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:43:21 by daniel149af       #+#    #+#             */
/*   Updated: 2024/10/24 16:12:19 by daafonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>//macros variables
# include <stdio.h>
# include <unistd.h>

int	ft_printstr(char *s);
int	ft_strlen_v2(char *str);
int	ft_printptr(uintptr_t ptr);

#endif
