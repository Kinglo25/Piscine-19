/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:27:07 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/26 14:27:09 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

int		main(int argc, char *argv[])
{
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) == 1 || *argv[2] == '+' ||
	*argv[2] == '/' || *argv[2] == '-' || *argv[2] == '*' || *argv[2] == '%')
	{
		do_op(argv);
	}
	else
		ft_putchar('\0');
	return (0);
}

void	print_ans(int a, int b, int (*op)(int, int))
{
	ft_putnbr(op(a, b));
	ft_putchar('\n');
}

void	do_op(char *argv[])
{
	if (*argv[2] == '+')
		print_ans(ft_atoi(argv[1]), ft_atoi(argv[3]), addition);
	if (*argv[2] == '-')
		print_ans(ft_atoi(argv[1]), ft_atoi(argv[3]), soustraction);
	if (*argv[2] == '*')
		print_ans(ft_atoi(argv[1]), ft_atoi(argv[3]), multiplication);
	if (*argv[2] == '/')
	{
		if (*argv[3] == '0')
			ft_putstr("Stop : division by zero\n");
		else
			print_ans(ft_atoi(argv[1]), ft_atoi(argv[3]), division);
	}
	if (*argv[2] == '%')
	{
		if (*argv[3] == '0')
			ft_putstr("Stop : modulo by zero\n");
		else
			print_ans(ft_atoi(argv[1]), ft_atoi(argv[3]), modulo);
	}
}
