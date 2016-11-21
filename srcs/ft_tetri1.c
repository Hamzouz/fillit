/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:23:03 by salibert          #+#    #+#             */
/*   Updated: 2016/11/21 15:27:30 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_carre(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb
			&& tab[x][y + 1] ==  nb && tab[x + 1][y + 1] == nb)
			return (1);
	return (0);
}

int		ft_ligne(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x + 1][y] == nb && tab[x + 2][y]
			&& tab[x + 3][y] == nb)
			return (1);
	return (0);
}

int		ft_colonne(char **tab, int nb, int x, int y)
{
	ft_putstr("salut");
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x][y + 2] == nb
			&& tab[x][y + 3] == nb)
			return (1);
	return (0);
}

int		ft_l1(char **tab, int nb, int x, int y)
{
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x][y + 2] == nb
			&& tab[x + 1][y + 2] == nb)
			return (1);
	return (0);
}

int		ft_l2(char **tab, int nb, int x, int y)
{
	ft_putchar('\n');
	ft_putchar(tab[x][y]);
	ft_putchar('\n');
	ft_putchar(tab[x][y + 1]);
	ft_putchar('\n');
	ft_putchar(tab[x][y + 2]);
	ft_putchar('\n');
	ft_putchar(tab[x - 1][y + 2]);
	ft_putchar('\n');
	if (tab[x][y] == nb && tab[x][y + 1] == nb && tab[x][y + 2] == nb
			&& tab[x - 1][y + 2] == nb)
			return (1);
	return (0);
}
