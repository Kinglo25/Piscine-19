/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:38:35 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 19:26:59 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;

	x = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power-- > 1)
		nb *= x;
	return (nb);
}
