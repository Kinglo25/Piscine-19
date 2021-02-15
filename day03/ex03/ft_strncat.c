/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 16:37:33 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/12 18:19:44 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*tmp;
	unsigned int		i;
	unsigned int		j;

	tmp = src;
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (tmp[j] && j < nb)
		dest[i++] = tmp[j++];
	dest[i] = '\0';
	return (dest);
}
