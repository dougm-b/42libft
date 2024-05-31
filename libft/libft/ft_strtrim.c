/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:45:16 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/18 19:08:54 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_trimval(char str, char strset, unsigned int start, unsigned int end, char trimmed)
{
	while (str[start] != '\0' && ft_strchr(set, str[start]))
		start++;
	while (end > start && ft_strchr(set, str[end]))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, &str[start], end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;
	char			*trimmed;
	char			*strset;
	char			res;
	
	str = (char *)s1;
	strset = (char *)set;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!str || !strset)
		return (NULL);
	if (ft_strlen(str) == 0)
		return (ft_strdup(""));
	if (ft_strlen(strset) == 0)
		return (ft_strdup(str));
	res = ft_trimval(char str, char strset, unsigned int start, unsigned int end, char trimmed)
	return(res);
}
/*char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;
	char			*trimmed;
	char			*strset;

	str = (char *)s1;
	strset = (char *)set;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!str || !strset)
		return (NULL);
	if (ft_strlen(str) == 0)
		return (ft_strdup(""));
	if (ft_strlen(strset) == 0)
		return (ft_strdup(str));
	while (str[start] != '\0' && ft_strchr(set, str[start]))
		start++;
	while (end > start && ft_strchr(set, str[end]))
		end--;
	trimmed = (char *)malloc(end - start + 2);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, &str[start], end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}*/


/*    while(str[start] != '\0' && strchr(set, str[start]))
    {
        start++;
    }
    while(str[end] != str[0] && strchr(set, str[end]))
    {
        end--;
    }
    trimmed = substr(str, start, strlen(str) -start -(strlen(str) -end));
    return (trimmed);
} */
/*   while(str[end] !)

    unsigned char   i;
    unsigned char   f;

    char    *str;

    i=0;
    f=0;
    lset = strlen(set)
    while (ft_strchr(s1[i] == set)
    {
        strnstr(s1, set, strlen(set))
    }
    str = (char *) malloc(str * sizeof(char))
*/
// int main(void)
// {
//     char const *s1="        Teste para a ft_strtrim.c       ";
//     char const *set=" ft_";
//     printf("%s", ft_strtrim(s1, set));
//     printf("%s", ft_strtrim("", " \n\t"));
//     printf("%s", strtrim(s1, " \n\t"));
//     return(0);
// }

/* 1- medir ate onde vai o set no inicio, medir set no fim,
quardar posiçao que parou no começo.
retornar restante menos o fim com nulo
*/
