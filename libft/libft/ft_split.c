/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 00:47:43 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/20 20:14:55 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ft_ctok(const char* s, const char c)
{
    int         ntok;
    const char* temp;
    size_t      delimlen;

    ntok = 0;
    temp = s;
    delimlen = ft_strlen(c);
    while ((temp = ft_strnstr(temp, c, ft_strlen(temp))) != NULL)
    {
        ntok++;
        temp = temp + delimlen;
    }
    return (ntok + 1);
}

char* ft_substring(const char* start, const char* end)
{
    size_t  len;
    char*   substr;

    len = end - start;
    substr = (char*)malloc((len + 1) * sizeof(char));
    if (substr == NULL)
        return NULL;
    ft_strlcpy(substr, start, len);
    substr[len] = '\0';
    return (substr);
}


int ft_tokstr(char** tokens, const char* s, const char* c)
{
    const char* start;
    const char* end;
    int i;
    size_t delimlen;

    start = s;
    i = 0;
    delimlen = ft_strlen(c);
    while ((end = ft_strnstr(start, c, ft_strlen(start))) != NULL)
    {
        tokens[i] = ft_substring(start, end);
        if (tokens[i] == NULL)
            return 1;
        i++;
        start = end + delimlen;
    }
    tokens[i] = ft_strdup(start);
    if (tokens[i] == NULL)
        return 1;
    tokens[++i] = NULL;
    return (0);
}

char** ft_split(const char* s, const char c)
{
    int ntok;

    ntok = ft_ctok(s, c);
    char** tokens = (char**)malloc((ntok + 1) * sizeof(char*));
    if (tokens == NULL)
        return NULL;
    if (ft_tokstr(tokens, s, c) != 0)
    {
        free(tokens);
        return (NULL);
    }
    return (tokens);
}
/*
int main(void)
{
    char const  *s = "um,dois,tres,quatro,cinco";
    char        c ",";
    char        **param;
    int         x;

    i= 0;
    param = ft_split(s, c);
    while (param[x] != NULL)
    {
        printf("%s", param[x]);
        x++;
    }
    printf("%s", ft_split(s, c));
    return(0);
}
*/
