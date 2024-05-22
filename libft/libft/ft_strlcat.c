/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:46:42 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/22 19:03:14 by domoreir         ###   ########.fr       */
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

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
    if (size == 0)
    {
        return(src_len);
	}
    if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

/* int main(void)
{
	char    dest[15];
//	const char  *src;
//	size_t  size = 0;

	//src = "Sempre";


  //   size = strlen(src) + strlen(dest) + 2;
	printf("%zu", ft_strlcat(dest, src, size));
    printf("%s", "\n");
//	printf("%s", dest);
	printf("%s", "\n");
//    printf("%s", strcat(dest, src));
    printf("%s", "\n");
//
//    write(1, "\n", 1);
	ft_memset(dest, 'r', 15);
    printf("%zu",(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5)));
    printf("%s", "\n");
    printf("%s", dest);
//    write(1, "\n", 1);
//    write(1, dest, 15);
    return(0);
}
// NAO PERCEBO O ERRO QUE DA NO WARMACHINE POIS ESTAO AMBOS COM O MESMO RESULTADO
 */
