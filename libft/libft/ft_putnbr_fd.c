/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:49:05 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:09:00 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int	c;

	c = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb <= 2147483647 && nb > -2147483648)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		c = nb % 10 + '0';
		write (1, &c, 1);
	}
}