/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:54:24 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 20:54:26 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*do_malloc(int size, char **strs, char *sep);
int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	if (((dest = do_malloc(size, strs, sep))) == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		i++;
		while (sep[j] && i < size)
			dest[k++] = sep[j++];
	}
	return (dest);
}

int		ft_strlen(char *str)
{
	char	*tmp;
	int		size;

	tmp = str;
	size = 0;
	while (*tmp)
	{
		tmp++;
		size++;
	}
	return (size);
}

char	*do_malloc(int size, char **strs, char *sep)
{
	int		strs_len;
	int		i;
	char	*dest;

	dest = NULL;
	i = 0;
	strs_len = 0;
	if (size)
	{
		while (i < size)
			strs_len += ft_strlen(*(strs + i++));
		strs_len += (size - 1) * ft_strlen(sep);
	}
	dest = malloc((strs_len + 1) * sizeof(char));
	dest[strs_len] = 0;
	if (dest == NULL)
		return (0);
	return (dest);
}
