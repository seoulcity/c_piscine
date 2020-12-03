/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klim <klim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:42:59 by klim              #+#    #+#             */
/*   Updated: 2020/11/21 13:43:00 by klim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(char *data, int x)
{
	int n;

	n = 0;
	if (n < x)
		ft_putchar(data[0]);
	n++;
	while (n < x - 1)
	{
		ft_putchar(data[1]);
		n++;
	}
	if (n < x)
		ft_putchar(data[2]);
	ft_putchar('\n');
}

void	cat(char *data, char a, char b, char c)
{
	data[0] = a;
	data[1] = b;
	data[2] = c;
}

void	print_col(char *str, int x, int y)
{
	int		n;
	char	data[3];

	n = 0;
	cat(data, str[0], str[4], str[1]);
	if (n < y)
		print_row(data, x);
	n++;
	cat(data, str[5], ' ', str[5]);
	while (n < y - 1)
	{
		print_row(data, x);
		n++;
	}
	cat(data, str[2], str[4], str[3]);
	if (n < y)
		print_row(data, x);
}

void	rush(int x, int y)
{
	print_col("oooo-|", x, y);
}
