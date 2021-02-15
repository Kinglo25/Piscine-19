/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:07:45 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/20 20:35:08 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int						ft_strlen(char *src)
{
	char	*tmp;
	int		str_len;

	tmp = src;
	str_len = 0;
	while (*tmp)
	{
		tmp++;
		str_len++;
	}
	return (str_len);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	if (!(dup = malloc(ft_strlen(src) + 1)))
		return (dup);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	if (!(tab = malloc((ac + 1) * sizeof(t_stock_str))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = NULL;
	return (tab);
}
