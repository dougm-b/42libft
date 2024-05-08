/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:18:29 by domoreir          #+#    #+#             */
/*   Updated: 2024/04/30 19:29:40 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	s[5];
	size_t	n;
	
	n = '5'
	ft_bzero(s, n);
	//printf("%s\n", s);
	return (0);
}
*/
