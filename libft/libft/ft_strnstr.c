/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:40:53 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/16 00:50:08 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  little_len;
    
    i=0;
    little_len = strlen(little);
    if (len == 0)
        return ((char *)big);
    
    while(big[i] && len >= little_len)
    {
        if(memcmp(&big[i], little, little_len) == 0)
            return((char *)&big[i]);
        i++;
        len--;
    }
    return(0);
}
/*
int main(void)
{
    const char  *big = "Teste para ft_strnstr";
    const char  *little = "para";
    size_t      len = 15;

    printf("%s", ft_strnstr(big, little, len));
    return(0);
}*/