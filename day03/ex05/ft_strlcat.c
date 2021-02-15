/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmajerus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 18:30:19 by lmajerus          #+#    #+#             */
/*   Updated: 2020/10/13 14:30:02 by lmajerus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest >= size)
		return (len_src + size);
	while (i < size - len_dest - 1 && src[i])
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

unsigned int	ft_strlen(char *str)
{
	char				*tmp;
	unsigned int		strlen;

	strlen = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		strlen++;
		tmp++;
	}
	return (strlen);
}
