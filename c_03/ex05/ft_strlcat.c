/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:39:08 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 14:19:56 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len_dest;
	unsigned int len_src;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (*dest)
	{
		i++;
		dest++;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	*dest = '\0';
	if (ft_strlen(dest) > size)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + ft_strlen(dest));
}
