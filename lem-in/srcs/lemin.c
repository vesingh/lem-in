/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vesingh <vesingh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 08:04:33 by vesingh           #+#    #+#             */
/*   Updated: 2019/09/06 10:20:40 by vesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		main(int ac, char **av)
{
	int		ants;
	t_room	*head_room;

	(void)av;
	if (ac > 1)
		ft_error();
	head_room = NULL;
	ants = ft_ants();
	printf("ants = %i\n", ants);
	ft_reader(&head_room);
	ft_printlist(&head_room);
	//ft_printlinks(&head_room);
	//sleep(60);
	return (0);
}
