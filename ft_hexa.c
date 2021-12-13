/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:51:18 by olakhdar          #+#    #+#             */
/*   Updated: 2021/11/28 14:28:20 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hexa(unsigned int nb, char *str, int *len)
{
	if (nb < 16)
		ft_putchar(str[nb], len);
	else
	{
		ft_hexa(nb / 16, str, len);
		ft_hexa(nb % 16, str, len);
	}
}
