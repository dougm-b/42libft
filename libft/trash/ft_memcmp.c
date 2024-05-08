/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:27:33 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/11 16:27:36 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *source1;
	const unsigned char *source2;

	source1 = (unsigned char*) s1;
	source2 = (unsigned char*) s2;
	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);	

}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*source1 = s1;
	const unsigned char	*source2 = s2;

/*	*source1 = s1;
	*source2 = s2;*/
	while (n > 0)
	{
		if (*source1 != *source2)
			return (*source1 - *source2);
		source1++;
		source2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	const char	s1[100];
	const char	s2[100];
	size_t	n;
	
	n = 50;
	printf("%d", ft_memcmp(s1, s2, n));
	return (0);
}*/

int	main(void)
{
	const char	*s1;
	const char	*s2;
	size_t	n;
	
	s1 = "Agora Vai";
	s2 = "Agora vai";

	n = 50;
	printf("%d", ft_memcmp(s1, s2, n));
	return (0);
}
