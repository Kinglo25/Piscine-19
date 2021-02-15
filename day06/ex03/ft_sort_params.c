/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 12:32:20 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 16:29:06 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_str(char *str);
void	ft_putchar(char c);
int		ft_strcmp(char *str1, char *str2);
void	ft_sort(char *tab[], int size);

int		main(int argc, char *argv[])
{
	int		i;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
		print_str(argv[i++]);
	return (0);
}

void	print_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

void	ft_sort(char *tab[], int size)
{
	int		i;
	char	*tmp;
	int		j;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
