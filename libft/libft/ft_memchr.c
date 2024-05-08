/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:28:22 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/08 21:01:20 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	char	str;
    unsigned int    i;

    i = 0;
	str = (char) c;
	ptr = (char *) s;
	while (n)
	{
		if (ptr[i] == str)
			return (ptr);
		i++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
    const char *s= "Olá, Domoreir";
    int c;
    size_t n;

    c = 'D';
    n = 10;
    printf("%p", ft_memchr(s, c, n));
    return(0);
}*/