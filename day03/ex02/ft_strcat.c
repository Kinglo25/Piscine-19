/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 14:07:23 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/12 10:19:49 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;
	int		i;
	int		j;

	tmp = src;
	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (tmp[j])
	{
		dest[i++] = tmp[j++];
	}
	dest[i] = '\0';
	return (dest);
}
