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

char	**main1(char *str);
int		ft_atoi(char *str);

void	print(char **tab, int size)
{
	int i = 0;
	while (i < size)
	{
		printf("%s\n", tab[i++]);
	}
}

int		check_dict(char **tab)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	*tmp;
	char	*undecillion;

	i = 0;
	j = 0;
	undecillion = "1000000000000000000000000000000000000";
	while (k < 20 && tab[i])
	{
		if (k == ft_atoi(tab[i]))
		{
			//a chaque fois que je trouve une valeure egale je swap la line 
			//pour la placer dans le bonne orde
			tmp = tab[j];
			tab[j] = tab[i];
			tab[i] = tmp;
			k++;
			i = 0;
			j++;
		}
		i++;
	}
	i = 20; // les 20 permieres lignes sont censee etre ordonnee
	if (k != 20)// check si il a bien trouver les valeures de 0 a 19
		return (1);
	while (k <= 100 && tab[i])
	{
		if (k == ft_atoi(tab[i]))
		{
			tmp = tab[j];
			tab[j] = tab[i];
			tab[i] = tmp;
			k += 10;
			i = 0;
			j++;
		}
		i++;
	}
	i = 0;
	if (k != 110)
		return (2);
	k = 0;
	while (tab[i])
	{
		while (m < k)
		{
			if (tab[i][m] == undecillion[m])
				m++;
			else
				break;
		}
		if (j == k)
		{
			tmp = tab[j];
			tab[j] = tab[i];
			tab[i] = tmp;
			j++;
			k += 3;
		}
		i++;
	}
	return (3);
}

int		ft_atoi(char *str)
{
	int		i;
	int		x;

	x = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		x *= 10;
		x += (int)(str[i++] - 48);
	}
	return (x);
}


int main(){
	char **tab;

	tab = NULL;
	tab = main1("number.dict");
	print(tab, 37);
}