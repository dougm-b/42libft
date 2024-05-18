/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:33:15 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/18 16:47:04 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    unsigned int    i;

    i = 0;
    while (s[i] != '\0')
    {
        write (fd, &s[i], 1);
        i++;
    }
}
