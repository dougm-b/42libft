/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:03:47 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/08 18:39:08 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
    	//s[i] = f(i, &s[i]);
        i++;
    }
}

void minha_funcao(unsigned int i, char *c)
{
    *c = *c + i;
}

int main (void)
{
    char  s[] = "Teste para a ft_striteri";
    
    ft_striteri(s, minha_funcao);
    printf("%s", s);
    return (0);
}