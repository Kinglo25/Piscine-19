/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 23:05:00 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/22 23:05:31 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
void	ft_putstr(char *str);
int		addition(int a, int b);
int		multiplication(int a, int b);
int		soustraction(int a, int b);
int		division(int a, int b);
int		modulo(int a, int b);
int		ft_strlen(char *str);
void	do_op(char *argv[]);
void	print_ans(int a, int b, int (*op)(int, int));

#endif
