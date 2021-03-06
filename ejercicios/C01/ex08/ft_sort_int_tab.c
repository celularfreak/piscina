/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnunez-m <dnunez-m@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:46:26 by dnunez-m          #+#    #+#             */
/*   Updated: 2021/11/05 13:35:07 by dnunez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	aux;

	x = 0;
	while (x < size)
	{
		y = 1;
		while (y < size)
		{
			if (tab[y] < tab[y - 1])
			{
				aux = tab[y];
				tab[y] = tab[y - 1];
				tab[y - 1] = aux;
			}
			y++;
		}
		x++;
	}
}
