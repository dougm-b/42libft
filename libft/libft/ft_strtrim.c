/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:45:16 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/06 23:22:01 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
    char            *str;
    unsigned int    start;
    unsigned int    end;
    char            *trimmed;

    str = (char *)s1;
    start = 0;
    end = strlen(s1) - 1;
    
    while(str[start] != '\0' && strchr(set, str[start]))
    {
        start++;
    }
    while(end > start && strchr(set, str[end]))
    {
        end--;   
    }
    trimmed = (char *)malloc(end - start + 2);
    if(trimmed == NULL)
    {
        return NULL;
    }
    strncpy(trimmed, &str[start], end - start + 1);
    trimmed[end - start + 1] = '\0';
    return (trimmed);
}   
/*    while(str[start] != '\0' && strchr(set, str[start]))
    {
        start++;
    }
    while(str[end] != str[0] && strchr(set, str[end]))
    {
        end--;   
    }
    trimmed = substr(str, start, strlen(str) -start -(strlen(str) -end));
    return (trimmed);
} */   
 /*   while(str[end] !)
    
    unsigned char   i;
    unsigned char   f;
    
    char    *str;
    
    i=0;
    f=0;
    lset = strlen(set)
    while (ft_strchr(s1[i] == set)
    {
        strnstr(s1, set, strlen(set))
    }
    str = (char *) malloc(str * sizeof(char))
*/
int main(void)
{
    char const *s1="        Teste para a ft_strtrim.c       ";
    char const *set="  ";
    printf("%s", ft_strtrim(s1, set));
    return(0);
}

/* 1- medir ate onde vai o set no inicio, medir set no fim, 
quardar posiçao que parou no começo. 
retornar restante menos o fim com nulo
*/