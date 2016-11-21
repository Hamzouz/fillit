/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 17:14:35 by salibert          #+#    #+#             */
/*   Updated: 2016/11/21 15:56:47 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_l8(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x - 1][y + 1] == nb
			&& tab[x - 2][y + 1] == nb)
			return (1);
	return (0);
}

int		ft_z1(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x + 1][y + 1] == nb
			&& tab[x + 2][y + 1] == nb)
			return (1);
	return (0);
}

int		ft_z2(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x][y + 1] == nb
			&& tab[x - 1][y + 1] == nb)
			return (1);
	return (0);
}

int		ft_z3(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y + 1] == nb
			&& tab[x + 1][y + 2] == nb)
			return (1);
	return (0);
}

int		ft_z4(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x - 1][y + 1] == nb
			&& tab[x - 1][y + 2] == nb)
			return (1);
	return (0);
}
