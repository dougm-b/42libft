/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:46:42 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:09:35 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = strlen(src);
	dest_len = strlen(dest);
	j = dest_len;
	i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

/*
size_t    ft_strcat(char  *dest, const char *src, size_t size)
{
    char    temp[100];
    int i;
    int f;

    i=0;
    f=0;
    while (src[i] != '\0')
    {
        temp[f] = src[i];
        i++;
        f++;
    }
    i=0;
    while (dest[i] != '\0')
    {
        temp[f] = dest[i];
        i++;
        f++;
    }
    temp[f] = '\0';
    return(temp);
    */
    /*temp = *dest;
    i=0;
    f=0;
    while (src[i] != '\0')
    {
        dest[f] = src[i];
        i++;
    }
    i=0;
    while (temp[i] != '\0')
    {
        dest[f] = temp[i];
        i++;
    }
    dest[f] = '\0';
    return(dest);
} */
/*
int main(void)
{   
	char    dest;
	const char  *src;
	size_t size;
	
	src = "Sempre";
	dest = "Avante";
    
	ft_strlcat(dest, src, size);
	printf("%u", dest);
	printf("%s", "\n");
	return(0);
}*/