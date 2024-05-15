/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:25:14 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/15 23:08:45 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ss = s;
	int	i;
	
	i = 0;
	while(i < (int) n)
	{
		ss[i] = c;
		i++;
	}
	return (ss);
}
/*
int	main(void)
{
	char	s[5];
	int	c;
	size_t	n;
	
	c = '8';
	n = 5;
	ft_memset(s, c, n);
	printf("%s\n", s);
	// printf("%p", ft_memset(s, c, n));
	return (0);
}
*/