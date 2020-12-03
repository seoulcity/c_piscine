/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 16:39:04 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/01 19:16:07 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;

	ptr = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			ptr = str;
			while (*to_find)
			{
				if (*str != *to_find)
					return (0);
				++to_find;
				++str;
			}
		}
		++str;
	}
	return (ptr);
}
