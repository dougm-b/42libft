/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:28:56 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/11 16:28:59 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

int	main(void)
{
	char	*dest;
	const char	*src;
	size_t	n;
	
	dest = ;
	src = "Agora tudo está a correr bem." ;
	n = ;
	ft_memmove(dest, src, n);
	printf("%d", ft_memmove(dest, src, n));
	return (0);
}

// A principal característica da função memmove() é que ela pode lidar com áreas de memória sobrepostas de maneira segura. Isso significa que você pode usar memmove() para mover bytes dentro de um único array ou entre dois arrays que podem se sobrepor. Por exemplo, se você quiser mover os primeiros 50 bytes de um array para uma posição diferente dentro do mesmo array, você pode usar a função memmove() da seguinte maneira: .......... memmove(&array[5], &array[0], 50);.............. Neste exemplo, os primeiros 50 caracteres do array serão movidos para começar na posição 5 do array
