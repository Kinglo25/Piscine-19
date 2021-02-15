/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:06:12 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/27 09:25:47 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_base(char *base);
int		position_in_base(char c, char *base_from);
int		ft_atoi(char *nbr, char *base_from);
int		ft_strlen(char *str);

int		is_valid_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-'
		|| (base[i] >= 9 && base[i] <= 13))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (2);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (42);
	return (0);
}

int		position_in_base(char c, char *base_from)
{
	int		i;

	i = 0;
	while (base_from[i])
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (-42);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
