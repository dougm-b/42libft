/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:32:42 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/30 19:50:24 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*source1;
	unsigned char	*source2;
    unsigned int    i;
    unsigned int    f;
	
    source1 = (unsigned char *) s1;
	source2 = (unsigned char *) s2;
    i=0;
    f=0;
	while (n != '\0')
	{
		if (source1[i] != source2[f])
		{
			return (source1[i] - source2[f]);
		}
		i++;
		f++;
		n--;
	}
	return (0);
}

int main(void)
{
    const char  *s1 = "Teste para ft_strncmp";
    const char  *s2 = "Teste parA ft_strncmp";
    size_t      n = 5;

    printf("%d", ft_strncmp(s1, s2, n));
    return(0);
}