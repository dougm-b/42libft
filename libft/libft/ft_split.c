/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 00:47:43 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/22 22:21:00 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ctok(const char *s, const char c)
{
	int	word;
	int	nword;

	word = 0;
	nword = 0;
	while (*s)
	{
		if (*s != c && nword == 0)
		{
			nword = 1;
			word++;
		}
		else if (*s == c)
		{
			nword = 0;
		}
		s++;
	}
	return (word);
}

static char	*ft_substring(const char *start, const char *end)
{
	size_t	len;
	char	*substr;
	char	*temp;

	len = end - start;
	substr = (char *) malloc((len + 1) * sizeof (char));
	if (substr == NULL)
		return (NULL);
	temp = substr;
	while (start != end)
	{
		*temp++ = *start++;
	}
	*temp = '\0';
	return (substr);
}

static int	ft_tokstr(char **tokens, const char *s, const char c)
{
	const char	*start;
	const char	*end;
	int			i;

	start = s;
	i = 0;
	while (*start)
	{
		while (*start == c)
			start++;
		if (*start == '\0')
			break ;
		end = start;
		while (*end != c && *end != '\0')
			end++;
		tokens[i] = ft_substring(start, end);
		if (tokens[i] == NULL)
			return (1);
		i++;
		start = end;
	}
	tokens[i] = NULL;
	return (0);
}

static void	ft_freetokens(char **tokens)
{
	unsigned int	i;

	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

char	**ft_split(const char *s, const char c)
{
	int		ntok;
	char	**tokens;

	if (s == NULL)
		return (NULL);
	ntok = ft_ctok(s, c);
	tokens = (char **) malloc ((ntok + 1) * sizeof (char *));
	if (tokens == NULL)
	{
		free(tokens);
		return (NULL);
	}
	if (ft_tokstr(tokens, s, c) != 0)
	{
		ft_freetokens(tokens);
		return (NULL);
	}
	return (tokens);
}
/* int ft_tokstr(char** tokens, const char* s, const char c)
{
    const char* start;
    const char* end;
    int i;

    start = s;
    i = 0;
    while ((end = ft_strchr(start, c)) != NULL)
    {
        tokens[i] = ft_substring(start, end);
        if (tokens[i] == NULL)
            return (1);
        i++;
        start = end + 1;
    }
    tokens[i] = ft_strdup(start);
    if (tokens[i] == NULL)
    {
        return (1);xe2\x9a\xa0 :
    }
    tokens[++i] = NULL;
    return (0);
}

char** ft_split(const char* s, const char c)
{
    int ntok;

    ntok = ft_ctok(s, c);
    char** tokens = (char**)malloc((ntok + 1) * sizeof(char*));
    if (tokens == NULL)
        return NULL;
    if (ft_tokstr(tokens, s, c) != 0)
    {
        free(tokens);
        return (NULL);
    }
    return (tokens);
} */
/* int main(void)
{
    char const  *s = "um,dois,tres,quatro,cinco";
    char        c = ",";
    char        **param;
    int         x;

    x= 0;
    param = ft_split(s, c);
    while (param[x] != NULL)
    {
        printf("%s", **param[x]);
        x++;
    }
    printf("%s", ft_split(s, c));
    return(0);
} */
/* int	main()
{
	char const *str = "   lorem  , consectetur   Suspendisse   ";
    char **result = ft_split(str, ' ');
    int i;

    i = 0;
    if (result == NULL)
        return 1;
    while (result)
    {
        printf("%s\n", result[i]);
        i++;
    }
	return (0);
} */
