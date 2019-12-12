/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:08:21 by aroque            #+#    #+#             */
/*   Updated: 2019/12/04 15:22:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int key;

	j = 1;
	while (j < size)
	{
		i = j - 1;
		key = tab[j];
		while (key < tab[i] && i >= 0)
		{
			tab[i + 1] = tab[i];
			tab[i] = key;
			i--;
		}
		j++;
	}
}
