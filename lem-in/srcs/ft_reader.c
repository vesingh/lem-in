/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reader.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 10:15:10 by vesingh           #+#    #+#             */
/*   Updated: 2019/08/23 09:21:48 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

/*
** ft_ants: checks the first line to be read, if it not digits only, return
** error. If it is only digits, convert it to a long long, and then check
** that it is within INT range.
** no 0 or negatives allowed.
*/

int			ft_ants(void)
{
	long long	ants;
	char		*line;

	line = NULL;
	ants = 0;
	get_next_line(0, &line);
	ants = ft_atoll(line);
	ft_memdel((void**)&line);
	if (ants < 1 || ants > 2147483647)
		ft_error();
	printf("no. of ants: %lli\n", ants);
	return (ants);
}

/*
** ft_reader: reads from standard output
** first line must be number of ants
** then continues to read rest of input to check if it is valid
** as it reads it does ft_do_line to analyse input given.
*/

void		ft_reader(t_room **head_room)
{
	char	*line;
	int		start;
	int		end;

	(void)head_room;
	line = NULL;
	end = 0;
	start = 0;
	while (get_next_line(0, &line))
	{
		//printf("line = %s\n", line);
		if (ft_do_line(head_room, line, &start, &end) == -1)
			ft_error();
		ft_memdel((void **)&line);
	}
	ft_memdel((void**)&line);
	if (start != -1 || end != -1)
		ft_error();
}
