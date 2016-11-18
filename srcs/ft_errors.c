/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 14:00:25 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/16 15:05:58 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_errors(int n)
{
	if (n == -1)
		ft_putstr("Une ou plusieurs grille du fichier n'est ou ne sont pas valide.");
	if (n == -10)
		ft_putstr("Parametre invalide");
	return (0);
}
