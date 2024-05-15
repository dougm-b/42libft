/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:01:45 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:09:15 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strdup(const char *s1)
{
    unsigned int    i;
    char    *str;
    
    i=0;
    str = (char *) malloc((strlen(s1)+1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
/*
int main(void)
{
    const char  *s1="Teste ft_strdup";
    printf("%s", ft_strdup(s1));
    return(0);
}*/