/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:30:53 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/16 00:51:24 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cont;

	if (s == NULL)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	cont = malloc(sizeof(char) * (len + 1));
	if (cont == NULL)
		return (0);
	ft_strlcpy(cont, s + start, len + 1);
	return (cont);
}
/*
int main(void)
{
    char const *s= "domeir@Teste para ft_substr da libft.";
    unsigned int start= 7;
    size_t len =20;
    
    printf("%s", ft_substr(s, start, len));
    return (0);
}
*/