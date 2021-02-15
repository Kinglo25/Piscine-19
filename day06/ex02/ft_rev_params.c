/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:25:28 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 16:18:19 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	while (argc - i - 1 > 0)
	{
		j = 0;
		while (argv[argc - i - 1][j])
		{
			ft_putchar(argv[argc - i - 1][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
