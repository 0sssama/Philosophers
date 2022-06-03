/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_right_fork.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 10:37:18 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/03 13:22:54 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <errno.h>

void	ft_set_right_fork(t_state *state)
{
	int	i;

	i = 0;
	while (i < state->num_of_philos)
	{
		if (i == 0)
			state->philos[i].right_fork = &state->philos[state->num_of_philos - 1].left_fork;
		else
			state->philos[i].right_fork = &state->philos[i - 1].left_fork;
		i++;
	}
}
