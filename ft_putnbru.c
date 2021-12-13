/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:51:57 by olakhdar          #+#    #+#             */
/*   Updated: 2021/11/28 11:42:29 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n, int *len)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0', len);
	if (n > 9)
	{
		ft_putnbru(n / 10, len);
		ft_putchar(n % 10 + '0', len);
	}
}
