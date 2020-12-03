/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:07:47 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 17:35:00 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int		ft_double(char *c)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (i <= ft_strlen(c))
	{
		while (j <= ft_strlen(c) - 1)
		{
			if (c[i] == c[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int		ft_mp_check(char *c)
{
	int i;

	i = 0;
	while (c[i])
	{
		if (c[i] == '+' || c[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	do_recursion(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr != 0)
	{
		do_recursion(nbr / base_len, base, base_len);
		write(1, &base[nbr % base_len], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	base_len;
	unsigned int	new_nbr;

	new_nbr = 0;
	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_double(base) || ft_mp_check(base))
		return ;
	i = 0;
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			nbr /= 10;
			new_nbr = -nbr * 10 + 8;
		}
		else
			new_nbr = -nbr;
		write(1, "-", 1);
	}
	do_recursion(new_nbr, base, base_len);
}
