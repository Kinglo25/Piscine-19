/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:41:43 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/17 20:36:53 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime_recu(unsigned int nb, unsigned int x);

int		ft_find_next_prime(int nb)
{
	unsigned int x;

	x = 3;
	if (nb <= 2)
		return (2);
	else if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	else if (!(is_prime_recu((unsigned int)nb, x)))
		return (ft_find_next_prime(nb + 2));
	return (nb);
}

int		is_prime_recu(unsigned int nb, unsigned int x)
{
	if (x * x > nb)
		return (1);
	if (nb % x == 0)
		return (0);
	return (is_prime_recu(nb, x + 2));
}
