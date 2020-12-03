/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:44:37 by junghyki          #+#    #+#             */
/*   Updated: 2020/11/24 14:54:03 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printno(char x, char y, char z)
{
	if (x == '7' && y == '8' && z == '9')
	{
		ft_putchar(x);
		ft_putchar(y);
		ft_putchar(z);
	}
	else if ((x < y) && (x < z) && (y < z))
	{
		ft_putchar(x);
		ft_putchar(y);
		ft_putchar(z);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x[3];

	x[0] = '0';
	x[1] = '0';
	x[2] = '0';
	while (x[0] < ':')
	{
		while (x[1] < ':')
		{
			while (x[2] < ':')
			{
				ft_printno(x[0], x[1], x[2]);
				x[2]++;
			}
			if (x[2] == ':')
				x[2] = '0';
			x[1]++;
			ft_printno(x[0], x[1], x[2]);
		}
		if (x[1] == ':')
			x[1] = '0';
		x[0]++;
		if (x[0] != ':')
			ft_printno(x[0], x[1], x[2]);
	}
}
