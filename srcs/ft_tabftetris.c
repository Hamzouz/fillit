/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstetri.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salibert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 16:13:58 by salibert          #+#    #+#             */
/*   Updated: 2016/11/21 15:34:50 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_tt		*ft_tabftetri2()
{
	 t_tt	*tabftetri;

	 if (!(tabftetri = (t_tt*)malloc(sizeof(*tabftetri) * (20))))
		 return (NULL);
	 tabftetri[0].f = &ft_carre;
	 tabftetri[1].f = &ft_ligne;
	 tabftetri[2].f = &ft_l3;
	 tabftetri[3].f = &ft_l4;
	 tabftetri[4].f = &ft_l5;
	 tabftetri[5].f = &ft_l7;
	 tabftetri[6].f = &ft_z1;
	 tabftetri[7].f = &ft_z2;
	 tabftetri[8].f = &ft_t4;
	 tabftetri[9].f = &ft_colonne;
	 tabftetri[10].f = &ft_l1;
	 tabftetri[11].f = &ft_l2;
	 tabftetri[12].f = &ft_l6;
	 tabftetri[13].f = &ft_l8;
	 tabftetri[14].f = &ft_z3;
	 tabftetri[15].f = &ft_z4;
	 tabftetri[16].f = &ft_t1;
	 tabftetri[17].f = &ft_t2;
	 tabftetri[18].f = &ft_t3;
	 tabftetri[19].f = 0;
	 return (tabftetri);
}
