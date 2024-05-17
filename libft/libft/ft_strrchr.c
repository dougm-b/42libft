/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:42:26 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 22:00:08 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i] != '\0')
		i++;
	if (cc == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] != s[0])
	{
		i--;
		if (s[i] == c)
			return ((char *)s + i);

	}

	return (0);
}
/*
int	main(void)
{
	int	c;
	const char	*s;

	c = 'z';
	s = "post @domoreir: agora foi!";
	printf("%s",ft_strrchr(s, c));
	printf("%s",strrchr(s, c));
	return(0);
}*/
