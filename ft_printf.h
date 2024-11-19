/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:46:57 by pledieu           #+#    #+#             */
/*   Updated: 2024/11/19 10:11:42 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_parse_format(char specifier, va_list args);
int		ft_handle_char(char c);
int		ft_handle_string(char *str);
int		ft_handle_int(int num);
int		ft_handle_hex(unsigned int num, int uppercase);
int		ft_handle_pointer(void *ptr);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_handle_unsigned(unsigned int num);

char	*ft_itoa_unsigned(unsigned int num);
char	*ft_itoa(int n);
char	*ft_itoa_base(unsigned long num, int base, int uppercase);

#endif