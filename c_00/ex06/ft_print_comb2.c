/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 12:59:31 by junghyki          #+#    #+#             */
/*   Updated: 2020/11/26 17:12:28 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char c[4])
{
	if (c[0] == '9' && c[1] == '8')
	{
		ft_putchar(c[0]);
		ft_putchar(c[1]);
		ft_putchar(' ');
		ft_putchar(c[2]);
		ft_putchar(c[3]);
	}
	else
	{
		ft_putchar(c[0]);
		ft_putchar(c[1]);
		ft_putchar(' ');
		ft_putchar(c[2]);
		ft_putchar(c[3]);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_nums(char c[4])
{
	if (c[0] < c[2])
		ft_print(c);
	else if ((c[0] == c[2]) && (c[1] < c[3]))
		ft_print(c);
}

void	ft_while(char c[4])
{
	while (c[0] < ':')
	{
		while (c[1] < ':')
		{
			while (c[2] < ':')
			{
				while (c[3] <= '9')
				{
					ft_nums(c);
					c[3]++;
				}
				c[3] = '0';
				c[2]++;
			}
			c[2] = '0';
			c[1]++;
		}
		c[1] = '0';
		c[0]++;
		ft_nums(c);
	}
}

void	ft_print_comb2(void)
{
	char num[4];

	num[3] = '1';
	num[2] = '0';
	num[1] = '0';
	num[0] = '0';
	ft_while(num);
}
