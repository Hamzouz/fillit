/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 10:59:27 by salibert          #+#    #+#             */
/*   Updated: 2016/11/21 15:49:02 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_t1(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y + 1] == nb
			&& tab[x][y + 2] == nb)
		return (1);
	return (0);
}

int		ft_t2(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y + 1] == nb
			&& tab[x][y + 2] == nb)
		return (1);
	return (0);
}

int		ft_t3(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y + 1] == nb
			&& tab[x - 1][y + 1] == nb)
		return (1);
	return (0);
}

int		ft_t4(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y + 1] == nb && tab[x + 1][y] == nb
			&& tab[x + 2][y] == nb)
		return (1);
	return (0);
}
