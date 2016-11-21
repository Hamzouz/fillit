/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:02:05 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/21 13:02:58 by salibert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "../srcs/libft/libft.h"

typedef struct	s_tetriminos
{
		int(*f)(char **tab, int nb, int y, int x);
}				t_tt;

int		ft_errors(int n);
int		ft_read(char *file);
t_tt	*ft_tabftetri1(void);
t_tt	*ft_tabftetri2(void);
int		ft_carre(char **tab, int nb, int y, int x);
int		ft_ligne(char **tab, int nb, int y, int x);
int		ft_colonne(char **tab, int nb, int y, int x);
int		ft_l1(char **tab, int nb, int y, int x);
int		ft_l2(char **tab, int nb, int y, int x);
int		ft_l3(char **tab, int nb, int y, int x);
int		ft_l4(char **tab, int nb, int y, int x);
int		ft_l5(char **tab, int nb, int y, int x);
int		ft_l6(char **tab, int nb, int y, int x);
int		ft_l7(char **tab, int nb, int y, int x);
int		ft_l8(char **tab, int nb, int y, int x);
int		ft_z1(char **tab, int nb, int y, int x);
int		ft_z2(char **tab, int nb, int y, int x);
int		ft_z3(char **tab, int nb, int y, int x);
int		ft_z4(char **tab, int nb, int y, int x);
int		ft_t1(char **tab, int nb, int y, int x);
int		ft_t2(char **tab, int nb, int y, int x);
int		ft_t3(char **tab, int nb, int y, int x);
int		ft_t4(char **tab, int nb, int y, int x);

#endif
