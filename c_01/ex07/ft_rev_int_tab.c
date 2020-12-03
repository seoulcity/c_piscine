/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:54:34 by junghyki          #+#    #+#             */
/*   Updated: 2020/11/29 13:39:18 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int mid;
	int temp;

	count = 0;
	mid = size / 2;
	while (count <= mid)
	{
		temp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = temp;
		count++;
	}
}

