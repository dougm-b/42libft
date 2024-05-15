/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:28:56 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:08:41 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (d == NULL || s == NULL)
		return (NULL);
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d = d + n;
		s = s + n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
/*
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest;
	const unsigned char	*s = src;
	int	i;
	
	i = 0;
	while (i < (int) n)
	{
		d[i] = s[i];
		i++;
	} 
	return (0);
} *//*

int	main(void)
{
	char	*dest;
	char	*src;
	size_t	n;
	
	
	src = "Agora tudo está a correr bem." ;
	n = strlen(src) + 1;
	dest = src + 1;
	ft_memmove(dest, src, n);
	printf("%p", ft_memmove(dest, src, n));
	return (0);
}*/
/*
int main (void)
{
         char src[] = "lorem ipsum qualquer coisa";
         char *dest;
         //char test[] = "con\0sec\0\0te\0tur";

         dest = src + 1;
         ft_memmove(dest, src, 8);
		 printf("%p", ft_memmove(dest, src, 8));
         //write(1, dest, 22);
}
*/
// A principal característica da função memmove() é que ela pode lidar com áreas de memória sobrepostas de maneira segura. Isso significa que você pode usar memmove() para mover bytes dentro de um único array ou entre dois arrays que podem se sobrepor. Por exemplo, se você quiser mover os primeiros 50 bytes de um array para uma posição diferente dentro do mesmo array, você pode usar a função memmove() da seguinte maneira: .......... memmove(&array[5], &array[0], 50);.............. Neste exemplo, os primeiros 50 caracteres do array serão movidos para começar na posição 5 do array.