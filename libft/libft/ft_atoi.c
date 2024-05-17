/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:40:43 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 22:37:59 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


int ft_atoi(const char *nptr)
{
    int	i;
    int signal;
    int result;

    i = 0;
    signal = 1;
    result = 0;
    if (nptr == NULL)
        return (0);
    while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v' ||
			nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
		i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            signal = -1;
        i++;
    }
    if (nptr[i] > 47)
    {
        while ((nptr[i] >= '0') && (nptr[i] <= '9'))
        {
            result = (result * 10) + (nptr[i++] - '0');
        }
    }
    return (result * signal);
}

int main(void)
{
    const char  *nptr= "+ 111344553";
    printf("%d", ft_atoi(nptr));
    return(0);
}
