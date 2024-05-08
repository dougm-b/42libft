/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:28:43 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/11 16:28:45 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d = dest;
	const unsigned char	*s = src;
	int	i;
	
	i = 0;
	while(i < (int) n)
	{
		d[i] = s[i];
		i++;
	}
	printf("%s", d);
	return (d);
}

int	main(void)
{
	char	dest[100];
	const char	*src;
	size_t	n;
	
	src = "Agora Vai";
	n = 5;
	ft_memcpy(dest, src, n);
	printf("%s", dest);
	return (0);
}
