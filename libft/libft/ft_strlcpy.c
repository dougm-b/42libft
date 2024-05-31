/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:47:01 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/16 00:49:48 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    
    i=0;
    while (src <= size || src[i] !='\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (size);
}*/
/*
int main(void)
{
    const char    *src;
    char    dest[100];
    size_t size;
    //char    p;
    //int i;

    src = "Mais uma para lista";
    //dest = "";
    size = 3;
    //ft_strlcpy(dest, src, size);
    i = 0;
    while (dest[i] !='\0')
    {
        write (1, &dest[i], 1);
        i++;
    }*//*
    printf("%zu", ft_strlcpy(dest, src, size));
    printf("%s%s", "\n", dest);
    return(0);
}
*/
