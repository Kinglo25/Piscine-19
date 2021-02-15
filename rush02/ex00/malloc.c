/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:07:33 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/24 12:12:25 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
char	**do_malloc(char *str, int file_len);
void	fill_tab(char *str, char **tab);

char	**main1(char *str)
{
	int		fd;
	char	*c;
	int		file_len;
	char	**tab;

	fd = open(str, O_RDONLY);
	while (read(fd, c, 1))
		file_len++;
	close(fd);
	tab = do_malloc(str, file_len);
	fill_tab(str, tab);
	return tab;
}		

char	**do_malloc(char *str, int file_len)
{
	int		fd;
	char	*c;
	int		lines_len;
	char	**tab;
	int		i;

	if (!(tab = malloc(sizeof(char*) * (file_len + 1))))
		return NULL;
	tab[file_len] = NULL;
	fd = open(str, O_RDONLY);
	while (read(fd, c, 1))
	{
		if (*c != '\n')
			lines_len++;
		else
		{
			if (!(*tab = malloc(sizeof(char) * (lines_len + 1))))
				return (NULL);
			lines_len = 0;
		}
	}
	close(fd);
	return (tab);
}

void	fill_tab(char *str, char **tab)
{
	int		fd;
	char	*c;
	int		i;
	int		j;

	fd = open(str, O_RDONLY);
	while (read(fd, c, 1))
	{
		if (*c != '\n')
			tab[i][j++] = *c;
		else
			tab[i++][j++] = '\0';
	}
	close(fd);
}