/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 19:45:03 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/08 19:48:34 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd)
{
    unsigned int    i;

    i = 0;
    while (s[i] != '\0')
    {
        write (fd, &i, 1):
        i++;
    }
    write (fd, '\n', 1)
}