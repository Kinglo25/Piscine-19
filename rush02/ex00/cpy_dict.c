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

int		len_of_file(char *str)
{
	int		fd;
	char	*buffer;
	int		len_of_file;

	len_of_file = 0;
	if ((fd = open(str, O_RDONLY)) == -1)
		return (0);
	while (read(fd, buffer, 1))
	{
		len_of_file++;
	}
	close(fd);
	return (len_of_file);
}


char	*cpy_dict(char *str)
{
	int		fd;
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * len_of_file(str));
	if (!tab)
		return (NULL);
	if ((fd = open(str, O_RDONLY)) == -1)
		return (0);
	while (read(fd, tab + i, 1))
	{	
		printf("%c", tab[i]);
		i++;
	}
	close(fd);
	return (tab);
}
