/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <ealbert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 13:15:35 by ealbert           #+#    #+#             */
/*   Updated: 2016/01/24 18:44:24 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**map_init(t_map *t2)
{
	int		i;
	if (!(t2 = (t_map *)malloc(sizeof(t_map))))
		ft_error();
	if (!(t2->map = (char **)malloc(sizeof(char *) * 13)))
		ft_error();
	i = 0;
	while (i < 13)
	{
		if (!(t2->map[i] = (char **)malloc(sizeof(char) * 13)))
			ft_error();
		map[i] = "............\0";
		i++;
	}
	t2->xcoor = 0;
	t2->ycoor = 0;
	return (t2);
}

int		resolve_it(t_triminos *t1, int map_limit)
{
	t_map	*t2;

	t2 = map_init(t2);
}
