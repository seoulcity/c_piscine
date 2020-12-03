/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:47:54 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 14:35:54 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				i;
	unsigned int	nbr;
	int				m_count;

	i = 0;
	nbr = 0;
	m_count = 1;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m_count *= -1;
		i++;
	}
	while ((str[i]) >= '0' && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	return (m_count * nbr);
}
