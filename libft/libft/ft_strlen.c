/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:47:16 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/10 20:47:21 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
    char *str;
    size_t p; //tamanho da funcao e size T e nao int//
    
    str = "zsdmgnygjkfjgjkfhmgjkgh";
    p = ft_strlen(str);
    printf("%zu", p);
    printf("%s", "\n");
    return(0);
}*/
