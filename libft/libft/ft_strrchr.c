/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:42:26 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/22 22:40:10 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
		i++;
	if (cc == '\0')
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/* char	*ft_strrchr(const char *s, int c)
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
} */
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
