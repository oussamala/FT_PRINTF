/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:21:22 by olakhdar          #+#    #+#             */
/*   Updated: 2021/11/28 14:35:12 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(const char *format, va_list arg, int *len, int i)
{
	if (format[i + 1] == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (format[i + 1] == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_itoa(va_arg(arg, int), len);
	else if (format[i + 1] == 'u')
		ft_putnbru(va_arg(arg, unsigned int), len);
	else if (format[i + 1] == 'p')
	{
		ft_putstr("0x", len);
		ft_phexa(va_arg(arg, unsigned long), "0123456789abcdef", len);
	}
	else if (format[i + 1] == 'X')
		ft_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF", len);
	else if (format[i + 1] == 'x')
		ft_hexa(va_arg(arg, unsigned int), "0123456789abcdef", len);
	else if (format[i + 1] == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	arg;

	i = 0;
	len = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				break ;
			ft_format(format, arg, &len, i);
			i++;
		}
		else
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(arg);
	return (len);
}
