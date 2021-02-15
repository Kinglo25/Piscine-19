/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:45:24 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/17 13:45:27 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**create_tab(char *str);

int		main(int argc, char *argv[])
{
	int i;
	char **tab;

	if (is_not_valid_input(argc, argv[1]))
		return (1);
	i = 0;
}

int		is_not_valid_input(int argc, char *str)
{
	int i;

	i = 0;
	if (argc != 2 || ft_strlen(str) != 31)
	{
		write(1, "Error", 5);
		return (1);
	}
	
	while (str[i])
	{
		if (str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != ' ')
			{
				write(1, "Error", 5);
				return (3);
			}
			i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
