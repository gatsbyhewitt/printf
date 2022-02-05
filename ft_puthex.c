/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abestaev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 08:57:14 by abestaev          #+#    #+#             */
/*   Updated: 2022/01/19 09:02:29 by abestaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_lhex(unsigned long d)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (d < 16)
		i += write(1, hex + d, 1);
	else if (d >= 16)
	{
		i += ft_lhex(d / 16);
		i += ft_lhex(d % 16);
	}
	return (i);
}

int	ft_bhex(unsigned long d)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (d < 16)
		i += write(1, hex + d, 1);
	else if (d >= 16)
	{
		i += ft_bhex(d / 16);
		i += ft_bhex(d % 16);
	}
	return (i);
}
