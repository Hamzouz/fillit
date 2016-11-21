/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:12:03 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/21 13:28:36 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_backtrack(t_tt *last, int position, int taille)
{
	int		x;
	int		y;
	int		i;

	x = postion / taille;
	y = position % taille;
	if (position == (taille * taille))
		return (1);
}
