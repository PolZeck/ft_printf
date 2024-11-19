/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:12:45 by pledieu           #+#    #+#             */
/*   Updated: 2024/11/19 12:10:57 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			count += ft_parse_format(*format, args);
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	ft_printf(" %p %p ", 0, 0);
// 	// ft_printf("NULL pointer 2: %p %p\n", 0, 0);
// 	// ft_printf("Non-NULL pointer: %p\n", (void *)123456);
// 	// ft_printf("NULL and non-NULL: %p %p\n", NULL, (void *)0xdeadbeef);

// 	printf(" %p %p ", 0, 0);
// 	// printf("NULL pointer 2: %p %p\n", 0, 0);
// 	// printf("Non-NULL pointer: %p\n", (void *)123456);
// 	// printf("NULL and non-NULL: %p %p\n", NULL, (void *)0xdeadbeef);

// 	return (0);
// }
