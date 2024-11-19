/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pledieu <pledieu@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:11:42 by pledieu           #+#    #+#             */
/*   Updated: 2024/11/19 10:36:45 by pledieu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_char(char c)
{
	return (ft_putchar(c));
}

int	ft_handle_string(char *str)
{
	if (!str)
		str = (NULL);
	return (ft_putstr(str));
}

int	ft_handle_int(int num)
{
	char	*str;
	int		len;

	str = NULL;
	str = ft_itoa(num);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_handle_hex(unsigned int num, int uppercase)
{
	char	*str;
	int		len;

	str = ft_itoa_base(num, 16, uppercase);
	len = ft_putstr(str);
	free(str);
	return (len);
}

int	ft_handle_pointer(void *ptr)
{
	unsigned long	addr;
	int				len;
	char			*str;

	addr = 0;
	str = ft_itoa_base(addr, 16, 0);
	len = ft_putstr("0x");
	addr = (unsigned long)ptr;
	len += ft_putstr(str);
	free(str);
	return (len);
}
