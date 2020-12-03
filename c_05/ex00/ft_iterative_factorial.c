/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:57:14 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 23:42:22 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int nbr;

	i = 1;
	nbr = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		while (i < nb)
		{
			nbr *= (i + 1);
			i++;
		}
	return (nbr);
}
