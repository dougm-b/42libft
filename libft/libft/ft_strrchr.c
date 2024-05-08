/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:42:26 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/10 20:42:38 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != s[0])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
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
