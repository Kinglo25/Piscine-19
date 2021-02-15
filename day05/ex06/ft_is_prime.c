/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:42:41 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/15 17:25:16 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime_recursive(unsigned int nb, unsigned int x);

int		ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	return (is_prime_recursive((unsigned int)nb, 3));
}

int		is_prime_recursive(unsigned int nb, unsigned int x)
{
	if (x * x > nb)
		return (1);
	if (nb % x == 0)
		return (0);
	return (is_prime_recursive(nb, x + 2));
}
