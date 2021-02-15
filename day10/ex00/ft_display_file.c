/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:13:59 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/24 12:00:00 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char *av[])
{
	int		fd;
	char	c;

	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	if (ac < 2)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	while (read(fd, &c, 1))
	{
		if (read(fd, &c, 1) < 0)
		{
			write(1, "Cannot read file.\n", 18);
			return (0);
		}
		write(1, &c, 1);
	}
	close(fd);
	return (0);
}
		
