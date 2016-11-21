/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:46:52 by salibert          #+#    #+#             */
/*   Updated: 2016/11/21 15:40:49 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_l3(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x][y + 1] == nb
			&& tab[x][y + 2] == nb)
			return (1);
	return (0);
}

int		ft_l4(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x + 1][y + 1] == nb
			&& tab[x + 1][y + 2] == nb)
			return (1);
	return (0);
}

int		ft_l5(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y] == nb
			&& tab[x + 2][y] == nb)
			return (1);
	return (0);
}
int		ft_l6(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x + 1][y + 1] == nb
			&& tab[x + 2][y + 1] == nb)
			return (1);
	return (0);
}

int		ft_l7(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x + 2][y] == nb
			&& tab[x + 2][y + 1] == nb)
			return (1);
	return (0);
}
