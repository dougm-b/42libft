/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 22:47:17 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/01 23:01:27 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    
    ptr = (void *) malloc(count * size);
    if (ptr != NULL)
        ft_bzero(ptr, count * size);
    return(ptr);
}
/*
int main(void)
{
    size_t count = 10
    size_t size = 10
    printf("%")
    return(0);
}*/