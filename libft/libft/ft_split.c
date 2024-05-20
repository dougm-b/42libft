/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 00:47:43 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/20 18:52:48 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para contar quantos tokens serão gerados
int ctok(const char* s, const char* c) {
    int ntok = 0;
    const char* temp = s;
    size_t delimLen = strlen(c);

    while ((temp = strstr(temp, c)) != NULL) {
        ntok++;
        temp += delimLen;
    }
    return (ntok + 1); // +1 para o último token
}

// Função para copiar uma substring de start até end-1
char* substring(const char* start, const char* end) {
    size_t len = end - start;
    char* substr = (char*)malloc((len + 1) * sizeof(char)); // +1 para o terminador nulo
    if (substr == NULL) {
        return NULL;
    }
    strncpy(substr, start, len);
    substr[len] = '\0';
    return substr;
}

// Função para tokenizar a string e armazenar os tokens
int tokenizeString(char** tokens, const char* s, const char* c) {
    const char* start = s;
    const char* end;
    int idx = 0;
    size_t delimLen = strlen(c);

    while ((end = strstr(start, c)) != NULL) {
        tokens[idx] = substring(start, end);
        if (tokens[idx] == NULL) {
            return 1;
        }
        idx++;
        start = end + delimLen;
    }
    tokens[idx] = strdup(start); // Último token
    if (tokens[idx] == NULL) {
        return 1;
    }
    tokens[++idx] = NULL;
    return 0;
}

// Define a função split
char** split(const char* s, const char* c) {
    int ntok = ctok(s, c);

    char** tokens = (char**)malloc((ntok + 1) * sizeof(char*)); // +1 para o token final NULL
    if (tokens == NULL) {
        return NULL;
    }

    if (tokenizeString(tokens, s, c) != 0) {
        free(tokens);
        return NULL;
    }
    return tokens;
}

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
    //
    printf("%s", ft_split(s, c));
    return(0);
}