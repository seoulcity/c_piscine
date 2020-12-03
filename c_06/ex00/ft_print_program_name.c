/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:16:13 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/03 18:34:07 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *c)
{
	write(1, c, ft_strlen(c));
}

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
