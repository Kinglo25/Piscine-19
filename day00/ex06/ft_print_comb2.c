/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 10:06:08 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/08 19:01:32 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int b;
	int a;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar('0' + a / 10);
			ft_putchar('0' + a % 10);
			ft_putchar(' ');
			ft_putchar('0' + b / 10);
			ft_putchar('0' + b % 10);
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
