/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:53:01 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 20:53:02 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src);

char	*ft_strdup(char *src)
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

int		ft_strlen(char *src)
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
