/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 22:13:24 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/08 19:29:52 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
	char			*str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char test_function(unsigned int i, char c)
{
    c = c + i;
    return (c);
}

int main(void)
{
    char const  *s = "Teste para a ft_strmapi";
    
    printf("%s", ft_strmapi(s, test_function));
    return (0);
}