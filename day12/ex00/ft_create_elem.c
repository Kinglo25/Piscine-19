/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:01:22 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/22 21:59:15 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data)
{
	t_list	*answer;

	if (!(answer = malloc(sizeof(t_list) * 1)))
		return NULL;
	answer->data = data;
	answer->next = NULL;
	return (answer);
}
