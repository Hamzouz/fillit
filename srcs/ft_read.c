/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:44 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/21 15:35:15 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_check_char(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			if (str[i] == '#')
				nb++;
			i++;
		}
		else
			return (ft_errors(- 1));
	}
	if (i != 21 || nb != 4)
		return (ft_errors(-1));
	return (1);
}

char	**ft_strtetri(char *str)
{
	int	i;
	int	x;
	int	y;
	char	**tab;

	i = 0;
	x = 0;
	y = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * 4)))
		return (0);
	while (i < 4)
		tab[i++] = (char*)malloc(sizeof(char*) * 4);
	i = 0;
	while (y < 4)
	{
		while (x < 4)
		{
			if (str[i] == '\n')
				i++;
			tab[x++][y] = str[i++];
		}
		x = 0;
		y++;
	}
	return (tab);
}

int		ft_check_tetri(char *str)
{
	char **tab;
	t_tt	*tabf;
	int x;
	int y;
	int i;

	i = 0;
	x = 0;
	y = 0;
	tab = ft_strtetri(str);
	ft_putchar('\n');
	while (y < 4)
	{
		while (x < 4)
		{
			if (tab[x][y] == '#')
			{
				ft_putchar(tab[x + 1][y]);
				tabf = ft_tabftetri2();
				while (tabf[i].f(tab, 35, x, y) != 1)
				{
					ft_putnbr(i);
					i++;
				}
				ft_putendl("-----------------");
				//ft_putstr("V/");
				return (1);
			}
			x++;
		}
		x = 0;
		y++;
	}
	return (0);
}



int		ft_check(char *str)
{
	if(ft_check_char(str) == 0)
		return (0);
	if (ft_check_tetri(str) == 0)
		return (0);
	return (1);
}

int		ft_read(char *file)
{
	int		fd;
	char	buf[22];

	if ((fd = open(file, O_DIRECTORY)) == -1)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (-1);
		while (read(fd, &buf, 21) != 0)
		{
			buf[21] = '\0';
			if (ft_check(buf) == 0)
				return (0);
		}
	}
	return (0);
}
