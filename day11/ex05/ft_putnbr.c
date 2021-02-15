/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:05:00 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/22 23:05:31 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

void	ft_putnbr(int nbr)
{
	unsigned int	x;

	x = (nbr < 0) ? -nbr : nbr;
	if (nbr < 0)
		ft_putchar('-');
	if (x > 9)
		ft_putnbr((int)(x / 10));
	ft_putchar(x % 10 + 48);
}