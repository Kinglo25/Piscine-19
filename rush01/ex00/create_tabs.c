/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_to_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:39:04 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/17 13:39:08 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// gives an address pointing towards a 4*4 array, also checking for malloc errors!
int		**create_input_array(int **array)
{
	int i;

	i = 0;
	array = malloc(4 * sizeof(*array));
	if (array == NULL)
		return (0);
	while (i < 4)
	{
		array[i] = malloc(4 * sizeof(**array));
		if (array[i] == NULL)
			return (0);
		i++;
	}
	return (array);
}
//fill the array with the input given
void	fill_input_array(int **input_array, char *str)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			input_array[i][j] = (int)(str[k] - 48);
			j++;
		}
		i++;
	}
}

//fill the array with zeros
void	fill_answer_array(int **answer_array)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			answer_array[i][j] = 0;
			j++;
		}
		i++;
	}
}
