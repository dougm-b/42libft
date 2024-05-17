/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:42:26 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 21:55:06 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
}
/*int	main(void)
{
	int	c;
	const char	*s;

	c = '\0';
	s = "post @domoreir: Agora foi!";
	printf("%s",ft_strchr(s, c));
	return(0);
}*/
