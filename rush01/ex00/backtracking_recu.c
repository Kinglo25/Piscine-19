/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:07:23 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/12 10:19:49 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_nb_of_seen_buildings_ok(int **answer_array, int i, int j, int nbr, int **input_array);

int		get_position_i(int **answer_array)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (answer_array[i][j] == 0)
				return (j);
			j++;
		}
		i++;
	}
}

int		get_position_j(int **answer_array)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (answer_array[i][j] == 0)
				return (j);
			j++;
		}
		i++;
	}
}

int		check_if_valid_nbr(int **answer_array, int i, int j, int nbr, int **input_array)
{
	int k;

	k = 0;
	if (is_nb_of_seen_buildings_ok(answer_array, i, j, nbr, input_array) == 0)
		return (0);
	while (k < 4)
	{
		if (answer_array[i][k] == answer_array[i][j] && j != k)
			return (0);
	}
	k = 0;
	while (k < 4)
	{
		if (answer_array[k][j] == answer_array[i][j] && i != k)
			return (0);
	}
	return (1);
}

int		is_problem_solved(int **answer_array)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (answer_array[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		bactracking_problem_solver(int **answer_array, int **input_array)
{
	int i;
	int j;
	int nbr;

	if (is_grid_full(answer_array))
		return (1);
	i = get_position_i;
	j = get_position_j;
	nbr = 1;
	while (nbr < 4)
	{
		if (check_if_valid_nbr(answer_array, i, j, nbr, input_array))//verifie si la case respect les condtions
		{
			answer_array[i][j] = nbr;
			if (bactracking_problem_solver(answer_array, input_array) == 1)// RECURSIVE
				return(1);
			answer_array[i][j] = 0;
		}
		nbr++;
	}
	return (0);
}