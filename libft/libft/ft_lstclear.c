/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domoreir <domoreir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 23:04:53 by domoreir          #+#    #+#             */
/*   Updated: 2024/05/17 19:49:20 by domoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*element;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	element = *lst;
	while (element)
	{
		next = element->next;
		del(element -> content);
		free(element);
		element = next;
	}
	*lst = NULL;
}
