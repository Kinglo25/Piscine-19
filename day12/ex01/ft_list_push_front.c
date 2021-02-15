/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:09:13 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/22 22:57:34 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if ((elem = ft_create_elem(data)))
	{
		if (*begin_list)
			elem->next = *begin_list;
		*begin_list = elem;
	}
}
