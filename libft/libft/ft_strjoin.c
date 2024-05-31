/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:32:32 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/18 18:36:50 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	i;
	unsigned char	f;
	char			*str;

	i = 0;
	f = 0;
	str = (char *) malloc((ft_strlen(s1)+ft_strlen(s2)+1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[f] != '\0')
	{
		str[i] = s2[f];
		i++;
		f++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main(void)
{
    char const *s1="Teste para";
    char const *s2=" a funcao ft_strjoin";
    printf("%s", ft_strjoin(s1,s2));
    return(0);
}*/
