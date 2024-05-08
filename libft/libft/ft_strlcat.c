/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:46:42 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/10 20:46:46 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
    return(dest);*/
}

int main(void)
{   
	char    dest;
	const char  *src;
	size_t size;
	
	src = "Sempre";
	dest = "Avante";
    
	ft_strcat(dest, src, size);
	printf("%zu", dest);
	printf("%s", "\n");
	return(0);
}
