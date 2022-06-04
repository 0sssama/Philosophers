/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_state.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:49:56 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/04 13:34:49 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include <errno.h>

int	ft_fill_state(t_state *state, char **av)
{
	state->time_of_start = 0;
	state->flag = 0;
	state->num_of_philos = ft_atoi(av[1]);
	state->time_to_die = ft_atoi(av[2]);
	state->time_to_eat = ft_atoi(av[3]);
	state->time_to_sleep = ft_atoi(av[4]);
	if (av[5])
	{
		state->total_eats = ft_atoi(av[5]);
		if (state->total_eats == 0)
			return (1);
	}
	else
		state->total_eats = -1;
	if (ft_allocate_philos(state))
		return (1);
	ft_set_right_fork(state);
	pthread_mutex_init(&state->writing, NULL);
	return (0);
}
