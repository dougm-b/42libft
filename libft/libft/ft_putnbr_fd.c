/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:49:05 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/16 00:20:52 by domoreir         ###   ########.fr       */
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
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n <= 2147483647 && n > -2147483648)
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		c = n % 10 + '0';
		write (fd, &c, 1);
	}
}