/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghyki <junghyki@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:19:31 by junghyki          #+#    #+#             */
/*   Updated: 2020/12/02 16:24:49 by junghyki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int value;

	value = 0;
	if (index < 0)
		return (-1);
	else if (index = 1)
		return (value);
	else if (index = 2)
		return (1);
	else if (index >= 3)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
