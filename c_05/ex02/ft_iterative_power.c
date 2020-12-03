/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:23:55 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 23:42:22 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int nbr;

	i = 1;
	nbr = 1;
	if (power < 0)
	{
		if (nb == 1)
			return (1);
		return (0);
	}
	else if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			nbr *= nb;
			i++;
		}
	}
	return (nbr);
}
