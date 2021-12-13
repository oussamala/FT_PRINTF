/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:56:45 by olakhdar          #+#    #+#             */
/*   Updated: 2021/11/28 11:42:38 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_phexa(unsigned long nb, char *str, int *len)
{
	if (nb < 16)
		ft_putchar(str[nb], len);
	else
	{
		ft_phexa(nb / 16, str, len);
		ft_phexa(nb % 16, str, len);
	}
}
