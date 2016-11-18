/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:44 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/18 14:41:26 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_nbelem(char *file)
{
	int		fd;
	char	buf[22];
	size_t	len;

	len = 0;
	if ((fd = open(file, O_DIRECTORY)) == -1)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (-1);
		while (read(fd, &buf, 21) != 0)
		{
			buf[21] = '\0';
			len++;
		}
	}
	else
		return (ft_errors(-10));
	return (len);
}

char	**ft_alloctab(char **tab, int len)
{
	if(!(tab = (char**)malloc(sizeof(char*) * (len + 1))))
		return (0);
	tab[len] = 0;
	return (tab);
}

int		check_file(char *file)
{
	int		fd;
	char	buf[22];
	size_t	i;
	size_t	nb_bloc;

	i = 0;
	nb_bloc = 0;
	if ((fd = open(file, O_DIRECTORY)) == -1)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (ft_errors(-10));
		while (read(fd, &buf, 21) != 0)
		{
			buf[21] = '\0';
			if (buf[i] == '#')
				nb_bloc++;
			if (nb_bloc != 4)
				return (-1);
			nb_bloc = 0;
			i = 0;
		}
	}
	return (0);
}

int		ft_read(char *file)
{
	int		fd;
	char	buf[22];
	char	**tab;
	size_t	len;
	size_t	i;

	len = ft_nbelem(file);
	tab = ft_alloctab(tab, len);
	i = 0;
	if ((fd = open(file, O_DIRECTORY)) == -1)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (-1);
		while (read(fd, &buf, 21) != 0)
		{
			buf[21] = '\0';
			tab[i] = ft_strdup(buf);
			i++;
		}
		ft_strtab(tab);
	}
	return (0);
}
