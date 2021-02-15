/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 20:59:57 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/20 12:54:42 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		find_nb_of_strs(char *str, char *charset);
int		is_in_charset(char str, char *charset);
char	**do_malloc(char *str, char *charset, int nb_of_strs);

char	**ft_split(char *str, char *charset)
{
	char	**ans;
	int		nb_of_strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (!str)
		return (NULL);
	nb_of_strs = find_nb_of_strs(str, charset);
	ans = do_malloc(str, charset, nb_of_strs);
	while (i < nb_of_strs)
	{
		j = 0;
		while (is_in_charset(str[k], charset) && str[k])
			k++;
		while (!is_in_charset(str[k], charset) && str[k])
		{
			ans[i][j++] = str[k];
			k++;
		}
		i++;
	}
	return (ans);
}

int		is_in_charset(char str, char *charset)
{
	char *tmp;

	tmp = charset;
	while (*tmp)
	{
		if (str == *tmp)
			return (1);
		tmp++;
	}
	return (0);
}

char	**do_malloc(char *str, char *charset, int nb_of_strs)
{
	char	**ans;
	int		len_of_strs;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if ((ans = malloc((nb_of_strs + 1) * sizeof(char*))) == NULL)
		return (NULL);
	ans[nb_of_strs] = NULL;
	while (i < nb_of_strs)
	{
		len_of_strs = 0;
		while (is_in_charset(str[j], charset) && str[j])
			j++;
		while (!is_in_charset(str[j], charset) && str[j])
		{
			j++;
			len_of_strs++;
		}
		if ((*(ans + i) = malloc((len_of_strs + 1) * sizeof(char))) == NULL)
			return (NULL);
		(*(ans + i++))[len_of_strs] = '\0';
	}
	return (ans);
}

int		find_nb_of_strs(char *str, char *charset)
{
	int		nb_of_strs;
	char	*tmp;

	nb_of_strs = 0;
	tmp = str;
	while (*tmp)
	{
		while (is_in_charset(*tmp, charset) && *tmp)
			tmp++;
		while (!is_in_charset(*tmp, charset) && *tmp)
			tmp++;
		if (!is_in_charset(*(tmp - 1), charset))
			nb_of_strs++;
	}
	return (nb_of_strs);
}
