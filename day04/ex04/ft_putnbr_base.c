/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:30:32 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/14 17:21:21 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	recursive(long nbr, char *base, int str_len);
int		is_invalid_argument(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	long	str_len;

	str_len = 0;
	if (is_invalid_argument(base))
	{
		while (base[str_len])
			str_len++;
		recursive(nbr, base, str_len);
	}
}

int		is_invalid_argument(char *base)
{
	int		i;
	char	index[127];

	i = 0;
	while (i <= 127)
		index[i++] = 0;
	i = 0;
	while (base[i])
	{
		if (++index[(int)base[i]] == 2 || base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i == 1 || i == 0)
		return (0);
	return (1);
}

void	recursive(long nbr, char *base, int str_len)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < str_len)
		ft_putchar(base[nbr % str_len]);
	else
	{
		recursive(nbr / str_len, base, str_len);
		ft_putchar(base[nbr % str_len]);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
