/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:12:34 by junghyki          #+#    #+#             */
/*   Updated: 2020/11/29 12:47:59 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	cal_nb;
	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * (-1);
	}
	cal_nb = nb;
	if (cal_nb >= 10)
	{
		ft_putnbr(cal_nb / 10);
	}
	ft_putchar('0' + cal_nb % 10);
}
