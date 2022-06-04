/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_monitor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrahm <olabrahm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:40:01 by olabrahm          #+#    #+#             */
/*   Updated: 2022/06/04 13:56:06 by olabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_all_ate(t_state *state)
{
	int	i;

	i = 0;
	while (i < state->num_of_philos)
	{
		if (state->philos[i].times_eaten < state->total_eats)
			return (0);
		i++;
	}
	return (1);
}

int	ft_monitor(t_state *state)
{
	int	i;

	i = 0;
	while (i < state->num_of_philos)
	{
		if (state->philos[i].last_time_eaten + state->time_to_die
			<= ft_current_time(state))
		{
			state->flag = 1;
			pthread_mutex_lock(&state->writing);
			printf("%10d: %d Is dead.\n", ft_current_time(state), i + 1);
			return (1);
		}
		if (state->total_eats != -1 && ft_all_ate(state))
		{
			state->flag = 1;
			return (1);
		}
		i++;
		if (i == state->num_of_philos)
			i = 0;
	}
	return (1);
}
