/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:42:26 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/22 22:36:01 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char)c;
	while (*s)
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	if (cc == '\0')
		return ((char *)s);
	return (NULL);
}
/* char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	cc;

	i = 0;
	cc = (char) c;
	if (((s[i] == '\0') && (c == '\0')) || *s == (char)c)
		return ((char *)s);
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (cc == 0)
		return ((char *)s + i);
	return (NULL);
} */

/* int	main(void)
{
	int	c;
	const char	*s;

	c = '\0';
	s = "post @domoreir: Agora foi!";
	printf("%s",ft_strchr(s, c));
	printf("%d", '\n');
	printf("%s",ft_strchr((0x560bf20580a6, 357)));
	printf("%d", '\n');
	printf("%s",strchr((0x560bf20580a6, 357)));
	printf("%d", '\n');
	return(0);
} */
