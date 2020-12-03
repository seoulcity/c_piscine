/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:11:10 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 17:34:41 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
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

int		ft_base_checker(char *str, char *base, int i, unsigned int nbr)
{
	int j;

	j = 0;
	while (base[j])
	{
		if (str[i] == base[j])
		{
			nbr *= ft_strlen(base);
			nbr += j;
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (nbr);
}

int		ft_atoi_base(char *str, char *base)
{
	int				i;
	int				j;
	unsigned int	nbr;
	int				m_count;

	i = 0;
	j = 0;
	nbr = 0;
	m_count = 1;
	if (ft_strlen(base) <= 1 || ft_double(base) || ft_mp_check(base))
		return (0);
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m_count *= -1;
		i++;
	}
	return (m_count * ft_base_checker(str, base, i, nbr));
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("  ++--12345a", "a"));
}
