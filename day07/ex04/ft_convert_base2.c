/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:06:12 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/27 09:26:28 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_valid_base(char *base);
int		position_in_base(char c, char *base_from);
int		ft_atoi(char *nbr, char *base_from);
int		ft_strlen(char *str);
int		find_len_nbr_in_base_to(unsigned int base_10_nbr,
		unsigned int len_base_to);
void	ft_itoa(int base_10_nbr, char *base_to, char *ans, int len_ans);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				base_10_nbr;
	unsigned int	len_base_to;
	char			*ans;
	int				len_ans;
	unsigned int	x;

	if (!nbr || !base_from || !base_to)
		return (0);
	if (is_valid_base(base_from) || is_valid_base(base_to))
		return (0);
	base_10_nbr = ft_atoi(nbr, base_from);
	len_base_to = ft_strlen(base_to);
	x = (base_10_nbr < 0) ? -base_10_nbr : base_10_nbr;
	len_ans = find_len_nbr_in_base_to(x, len_base_to);
	if (base_10_nbr < 0)
		len_ans++;
	if (!(ans = malloc(sizeof(char) * (len_ans + 1))))
		return (NULL);
	ans[len_ans] = '\0';
	ft_itoa(base_10_nbr, base_to, ans, len_ans);
	return (ans);
}

int		ft_atoi(char *nbr, char *base_from)
{
	int				i;
	int				signe;
	unsigned int	base_10_nbr;
	int				len_base_from;

	base_10_nbr = 0;
	len_base_from = ft_strlen(base_from);
	signe = 1;
	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe *= -1;
		i++;
	}
	while ((position_in_base(nbr[i], base_from)) != -42)
		base_10_nbr = (unsigned int)(base_10_nbr * len_base_from
		+ position_in_base(nbr[i++], base_from));
	return ((int)(base_10_nbr * signe));
}

int		find_len_nbr_in_base_to(unsigned int base_10_nbr,
		unsigned int len_base_to)
{
	if (base_10_nbr < len_base_to)
		return (1);
	return (1 + find_len_nbr_in_base_to(base_10_nbr /
	len_base_to, len_base_to));
}

void	ft_itoa(int base_10_nbr, char *base_to, char *ans, int len_ans)
{
	unsigned int	x;
	int				len_base_to;

	len_base_to = ft_strlen(base_to);
	x = (base_10_nbr < 0) ? -base_10_nbr : base_10_nbr;
	if (base_10_nbr < 0)
	{
		ans[0] = '-';
		len_ans--;
		while (x)
		{
			ans[len_ans--] = base_to[x % len_base_to];
			x /= len_base_to;
		}
	}
	else
	{
		while (len_ans)
		{
			len_ans--;
			ans[len_ans] = base_to[x % len_base_to];
			x /= len_base_to;
		}
	}
}
