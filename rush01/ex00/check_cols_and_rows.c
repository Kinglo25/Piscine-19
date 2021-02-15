/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 21:24:26 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/17 21:24:28 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_col_from_up(int **answer_array, int i, int j, int hauteur, int **input_array)
{
	int k;
	int nb_seen_buildings;
	int hauteur_max;

	k = 0;
	nb_seen_buildings = 1;
	hauteur_max = answer_array[i][0];
	while (k < j)
	{
		if (answer_array[i][k] > hauteur_max)
		{
			hauteur_max = answer_array[i][k];
			nb_seen_buildings++;
		}
		k++;
	}
	if (hauteur > hauteur_max)
		nb_seen_buildings++;
	if (nb_seen_buildings <= input_array[0][j])
		return (1);
	return (0);
}

int		check_col_from_down(int **answer_array, int i, int j, int hauteur, int **input_array)
{
	int k;
	int nb_seen_buildings;
	int hauteur_max;

	k = 0;
	nb_seen_buildings = 1;
	hauteur_max = answer_array[i][3];
	while (k < j)
	{
		if (answer_array[i][k] > hauteur_max)
		{
			hauteur_max = answer_array[i][k];
			nb_seen_buildings++;
		}
		k++;
	}
	if (hauteur > hauteur_max)
		nb_seen_buildings++;
	if (nb_seen_buildings <= input_array[1][j])
		return (1);
	return (0);
}

int		check_row_from_left(int **answer_array, int i, int j, int hauteur, int **input_array)
{
	int k;
	int nb_seen_buildings;
	int hauteur_max;

	k = 0;
	nb_seen_buildings = 1;
	hauteur_max = answer_array[0][j];
	while (k < j)
	{
		if (answer_array[i][k] > hauteur_max)
		{
			hauteur_max = answer_array[i][k];
			nb_seen_buildings++;
		}
		k++;
	}
	if (hauteur > hauteur_max)
		nb_seen_buildings++;
	if (nb_seen_buildings <= input_array[2][i])
		return (1);
	return (0);
}

int		check_row_from_right(int **answer_array, int i, int j, int hauteur, int **input_array)
{
	int k;
	int nb_seen_buildings;
	int hauteur_max;

	k = 0;
	nb_seen_buildings = 1;
	hauteur_max = answer_array[3][j];
	while (k < j)
	{
		if (answer_array[i][k] > hauteur_max)
		{
			hauteur_max = answer_array[i][k];
			nb_seen_buildings++;
		}
		k++;
	}
	if (hauteur > hauteur_max)
		nb_seen_buildings++;
	if (nb_seen_buildings <= input_array[3][i])
		return (1);
	return (0);
}

int		is_nb_of_seen_buildings_ok(int **answer_array, int i, int j, int nbr, int **input_array)
{
	if (check_col_from_up(answer_array, i, j, nbr, input_array) == 0)
		return (0);
	if (check_col_from_down(answer_array, i, j, nbr, input_array) == 0)
		return (0);
	if (check_row_from_left(answer_array, i, j, nbr, input_array) == 0)
		return (0);
	if (check_row_from_right(answer_array, i, j, nbr, input_array) == 0)
		return (0);
	return (1);
}
