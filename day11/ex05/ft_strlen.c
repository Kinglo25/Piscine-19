/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:18:33 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/26 15:18:34 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		ft_strlen(char *str)
{
	char	*tmp;
	int		strlen;

	strlen = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		strlen++;
		tmp++;
	}
	return (strlen);
}
