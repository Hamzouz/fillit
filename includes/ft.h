/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmadad <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:02:05 by hmadad            #+#    #+#             */
/*   Updated: 2016/11/18 14:41:30 by hmadad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct	s_tetriminos
{
	char	letter;
	char	*forme;


}				t_tetriminos;

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_errors(int n);
void	ft_strtab(char **tab);
char	*ft_strdup(const char *s);
int		ft_read(char *file);

#endif
